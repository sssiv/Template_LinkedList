//
// Created by SamSS on 9/10/2020.
//
#include "chessboard.h"
#include "queens.h"
#include <iostream>

Board::Board()
{
    _row = _column = 0;
    board.setSize({80.f, 80.f});
    board.setFillColor(sf::Color::Red);
    board.setOutlineColor(sf::Color::White);
    board.setOutlineThickness(5.f);
    board.setPosition({50.f, 50.f});
    blackQueen.loadFromFile("BlackQueen.png");
    whiteQueen.loadFromFile("WhiteQueen.png");
}

sf::RectangleShape **Board::createBoard(int row, int column)
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

sf::RectangleShape Board::createCell(float x, float y, bool color)
{
    sf::RectangleShape redSquare;
    sf::RectangleShape blueSquare;
    sf::RectangleShape temp;

    redSquare.setFillColor(sf::Color::Red);
    redSquare.setSize({80.f, 80.f});
    redSquare.setOutlineColor(sf::Color::White);
    redSquare.setOutlineThickness(5.f);
    redSquare.setPosition(x, y);
    
    blueSquare.setSize({80.f, 80.f});
    blueSquare.setFillColor(sf::Color::Blue);
    blueSquare.setOutlineColor(sf::Color::White);
    blueSquare.setOutlineThickness(5.f);
    blueSquare.setPosition(x, y);

    temp.setSize({80.f, 80.f});
    temp.setFillColor(sf::Color::Red);
    temp.setOutlineColor(sf::Color::White);
    temp.setOutlineThickness(5.f);
    temp.setPosition(x, y);
    if (color) return redSquare;
    return blueSquare;
}

void Board::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    for (int i = 0; i < _row; ++i)
        for (int j = 0; j < _column; ++j)
            window.draw(ptr[i][j], states);
}

void Board::makeBoard(float row, float column)
{
    ptr = createBoard(row, column);   
    for (int i = 0; i < _row; ++i)
    {
        bool color = true;   
        for (int j = 0; j < _column; ++j)
        {
            if (color)
            {
                color = false;
                ptr[i][j] = createCell(90 * i, 90 * j, color);
            }
            else if (!color)
            {
                color = true;
                ptr[i][j] = createCell(90 * i, 90 * j, color);
            }
        }
    }
}

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

Board::~Board()
{
    for (int i = 0; i < _row; ++i)
        delete [] ptr[i];
    delete [] ptr;
}



