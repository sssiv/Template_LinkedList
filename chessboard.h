//
// Created by SamSS on 9/10/2020.
//
#ifndef CHESSBOARD_H_
#define CHESSBOARD_H_
#include <SFML/Graphics.hpp>

class Grid: public sf::Drawable, public sf::Transformable
{
private:
    sf::RectangleShape rectangle;
    sf::RectangleShape **ptr;
    int _row, _column;

public:
    Grid();
    sf::RectangleShape **createArray(int, int);
    sf::RectangleShape newRectangleShape(float, float);
    void draw(sf::RenderTarget&, sf::RenderStates) const;
    void fillArray(float, float);
    void addEvent(sf::Keyboard::Key);
    ~Grid();
};

#endif //CHESSBOARD_H_
