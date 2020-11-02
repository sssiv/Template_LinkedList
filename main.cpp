#include "list.h"
#include "queue.h"
#include "queens.h"
#include "stack.h"
#include "chessboard.h"

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

void displayGrid()
{
	Grid grid;
    sf::RenderWindow window({1920, 1080, 32}, "Grid");
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
                grid.addEvent(event.key.code);
            }
        }
        window.clear();
        grid.createArray(2, 3);
        grid.fillArray(2, 3);
        window.draw(grid);
        window.display();
    }
}

int main()
{
	displayGrid();
	return 0;
}