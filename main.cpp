#include "list.h"
#include "queue.h"
#include "queens.h"
#include "stack.h"

int main()
{
	// Stack<int> stack;
	// for (int i = 1; i < 6; ++i) stack.push(i);
	// std::cout << stack << std::endl;
	Queens problem1(20);
    std::cout << problem1 << std::endl;
    std::cout << "=======\n=======\n" << std::endl;

    Queens problem2(5);
    std::cout << problem2 << std::endl;
    std::cout << "=======\n=======\n" << std::endl;

    Queens problem3(8);
    std::cout << problem3 << std::endl;
    std::cout << "=======\n=======\n" << std::endl;
	return 0;
}