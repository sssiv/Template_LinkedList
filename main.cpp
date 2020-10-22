#include "list.h"
#include "queue.h"
#include "queens.h"
#include "stack.h"

int main()
{
	Stack<int> stack;
	for (int i = 1; i < 6; ++i) stack.push(i);
	std::cout << stack << std::endl;
	return 0;
}