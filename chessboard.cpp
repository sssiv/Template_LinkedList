//
// Created by SamSS on 9/10/2020.
//
#include "chessboard.h"
#include <iostream>
#include <random>
//#include <algorithm>

Grid::Grid()
{
    _row = _column = 0;
    rectangle.setSize({200.f, 200.f});
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setOutlineColor(sf::Color::White);
    rectangle.setOutlineThickness(10.f);
    rectangle.setPosition({50.f, 50.f});
}

sf::RectangleShape **Grid::createArray(int row, int column)
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

sf::RectangleShape Grid::newRectangleShape(float x, float y)
{
    sf::RectangleShape temp;
    temp.setSize({200.f, 200.f});
    temp.setFillColor(sf::Color::Blue);
    temp.setOutlineColor(sf::Color::White);
    temp.setOutlineThickness(20.f);
    temp.setPosition(x, y);
    return temp;
}

void Grid::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    for (int i = 0; i < _row; ++i)
        for (int j = 0; j < _column; ++j)
            window.draw(ptr[i][j], states);
}

void Grid::fillArray(float row, float column)
{
    for (int i = 0; i < _row; ++i)
        for (int j = 0; j < _column; ++j)
            ptr[i][j] = newRectangleShape(210 * i, 210 * j);
}

void Grid::addEvent(sf::Keyboard::Key keyPressed)
{
    if (keyPressed == sf::Keyboard::Up)
    {
        ++_row;
        ++_column;
        std::cout << "Up" << std::endl;
        std::cout << _row << std::endl;
        std::cout << _column << std::endl;
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
        std::cout << _row << std::endl;
        std::cout << _column << std::endl;
    }  
}

Grid::~Grid()
{
    for (int i = 0; i < _row; ++i)
        delete [] ptr[i];
    delete [] ptr;
}



