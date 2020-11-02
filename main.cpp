//
// Created by SamSS
//
#include "list.h"
#include "queue.h"
#include "queens.h"
#include "stack.h"
#include "chessboard.h"

// std::cout NQueens
void printQueens()
{
	Queens problem1(20);
	std::cout << problem1 << std::endl;
	PAUSE;
	CLEAR;

	Queens problem2(5);
	std::cout << problem2 << std::endl;
	PAUSE;
	CLEAR;

	Queens problem3(8);
	std::cout << problem3 << std::endl;
	PAUSE;
	CLEAR;
}

// SFML NQueens
void displayBoard()
{
	Board board;
    sf::RenderWindow window({2000, 1250, 32}, "chessboard");
    sf::RenderStates states;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::KeyPressed)
            {
                board.addEvent(event.key.code);
            }
        }
        window.clear();
        board.makeBoard(1, 1);
        window.draw(board);
        window.display();
    }
}

int main()
{
	displayBoard();
	return 0;
}