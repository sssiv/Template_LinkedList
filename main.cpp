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
    system("pause");
    system("clear");

	Queens problem2(5);
	std::cout << problem2 << std::endl;
    system("pause");
    system("clear");

	Queens problem3(8);
	std::cout << problem3 << std::endl;
    system("pause");
    system("clear");
}

// SFML NQueens
void print_SFML_NQueens()
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

// Linked List
void linked_list()
{
    LinkedList<int> list;
    for (size_t i = 0; i < 10; ++i) list.makeNewNode(i);
    list += 69;

    std::cout << "Opperator Overload Output" << std::endl;
    std::cout << list << std::endl << std::endl;

    std::cout << "Iterator Output" << std::endl;
    for (auto i : list) std::cout << i << "\t";
}

int main()
{
    //printQueens();
	//print_SFML_NQueens();
    linked_list();
	return 0;
}