//
// Created by SamSS
//
#include "chessboard.h"
#include "queens.h"
#include <iostream>

// Default Constructor
Board::Board() : ptr(nullptr), _row(0), _column(0)
{
    board.setSize({80.f, 80.f});
    board.setFillColor(sf::Color::Red);
    board.setOutlineColor(sf::Color::White);
    board.setOutlineThickness(2.f);
    board.setPosition({50.f, 50.f});

    blackQueen.loadFromFile("BlackQueen.png");
    whiteQueen.loadFromFile("WhiteQueen.png");
    sprite_blackQueen.setScale(0.1, 0.1);
    sprite_whiteQueen.setScale(0.1, 0.1);
    sprite_blackQueen.setPosition(25.f, 25.f);
    sprite_whiteQueen.setPosition(25.f, 25.f);
    sprite_blackQueen.setTexture(blackQueen);
    sprite_whiteQueen.setTexture(whiteQueen);
}

// Initializes Dynamic (board) Array
sf::RectangleShape **Board::initializeBoard(int row, int column)
{
    row = _row;
    column = _column;
    ptr = new sf::RectangleShape*[_row];
    for (int i = 0; i < row; ++i)
    {
        ptr[i] = new sf::RectangleShape[column];
    }
    return ptr;
}

// Make Square
sf::RectangleShape Board::makeCell(float x, float y, int row_col)
{
    sf::RectangleShape square;
    if (row_col % 2 == 0)
    {
        sf::RectangleShape redSquare;
        redSquare.setFillColor(sf::Color::Red);
        redSquare.setSize({80.f, 80.f});
        redSquare.setOutlineColor(sf::Color::White);
        redSquare.setOutlineThickness(5.f);
        redSquare.setPosition(x, y);
        square = redSquare;
    }
    else
    {
        sf::RectangleShape blackSquare; 
        blackSquare.setSize({80.f, 80.f});
        blackSquare.setFillColor(sf::Color::Black);
        blackSquare.setOutlineColor(sf::Color::Red);
        blackSquare.setOutlineThickness(5.f);
        blackSquare.setPosition(x, y);
        square = blackSquare;
    }
    return square;
}

// Window Executable - Display Board
void Board::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    for (int i = 0; i < _row; ++i)
    {
        for (int j = 0; j < _column; ++j)
        {
            window.draw(ptr[i][j], states);
            window.draw(sprite_blackQueen, states);
        }
    }
}

// Public - Create Board
void Board::makeBoard(float row, float column)
{
    ptr = initializeBoard(row, column);  
    for (int i = 0; i < _row; ++i)
        for (int j = 0; j < _column; ++j)
            ptr[i][j] = makeCell(90 * i, 90 * j, i + j);
}

// Key-Presses or Other Action Things
void Board::addEvent(sf::Keyboard::Key keyPressed)
{
    if (keyPressed == sf::Keyboard::Up)
    {
        ++_row;
        ++_column;
        std::cout << "Up" << std::endl;
    }
    if (keyPressed == sf::Keyboard::Down)
    {
        --_row;
        --_column;
        if (_row < 0)
            _row = 0;
        if (_column < 0)
            _column = 0;
        std::cout << "Down" << std::endl;
    }  
}

// Deconstructor
Board::~Board()
{
    for (int i = 0; i < _row; ++i)
        delete [] ptr[i];
    delete [] ptr;
}



