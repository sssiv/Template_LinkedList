//
// Created by SamSS on 9/10/2020.
//
#ifndef CHESSBOARD_H_
#define CHESSBOARD_H_
#include <SFML/Graphics.hpp>
#include "queens.h"

class Board: public sf::Drawable, public sf::Transformable
{
private:
    Queens queens;
    sf::RectangleShape createCell(float, float, bool);
    sf::RectangleShape **createBoard(int, int);  
    sf::RectangleShape board;
    sf::RectangleShape **ptr;
    sf::Texture blackQueen, whiteQueen;
    int _row, _column;

public:
    Board();
    void draw(sf::RenderTarget&, sf::RenderStates) const;
    void makeBoard(float, float);
    void addEvent(sf::Keyboard::Key);
    ~Board();
};

#endif //CHESSBOARD_H_
