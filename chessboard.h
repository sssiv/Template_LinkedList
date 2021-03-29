//
// Created by SamSS
//
#ifndef CHESSBOARD_H_
#define CHESSBOARD_H_
#include <SFML/Graphics.hpp>
#include "queens.h"

class Board: public sf::Drawable, public sf::Transformable, Queens
{
private:
    sf::RectangleShape makeCell(float, float, int);
    sf::RectangleShape **initializeBoard(int, int);  
    sf::RectangleShape board;
    sf::RectangleShape **boardPtr;
    sf::Texture blackQueen, whiteQueen;
    sf::Sprite sprite_blackQueen, sprite_whiteQueen;
    int _row, _column;

public: 
    Board();
    void draw(sf::RenderTarget&, sf::RenderStates) const;
    void makeBoard(float, float);
    void addEvent(sf::Keyboard::Key);
    ~Board();
};

#endif //CHESSBOARD_H_
