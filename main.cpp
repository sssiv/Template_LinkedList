#include "list.h"
#include "queue.h"
#include "queens.h"
//#include "stack.h"

int main()
{
	Queens Q1(20);
	std::cout << Q1 << std::endl;

	Queens Q2(14);
	std::cout << Q2 << std::endl;

	Queens Q3(9);
	std::cout << Q3 << std::endl;

	Queens Q4(4);
	std::cout << Q4 << std::endl;
	// LinkedList<int> List;
	// LinkedList<char> List2;
	// //Stack<LinkedList<int>> Stack;
	// //Stack.push(1234);
	// for (int i = 1; i < 9; ++i)
	// {
	// 	List.makeNewNode(i);
	// 	List2.makeNewNode('a' + i - 1);
	// }	
	
	// C_END;
	// std::cout<<  "||-------------____Displaying All nodes____-------------||";
	// C_END;
	// std::cout << List << std::endl;
	// C_END;
	// std::cout << List2 << std::endl;

	// C_END;
	// std::cout<<  "||-----------____Iteratoring Through List____-----------||";
	// C_END;
	// for (int i : List) std::cout << i << "\t";
	// C_END;
	// for (LinkedList<char>::iterator c_itr = List2.begin(); c_itr != List2.end(); ++c_itr)
	// {
	// 	std::cout << *c_itr << "\t";
	// }

	// C_END;
	// std::cout<<  "||------------____Clear all items in list____-----------||";
	// C_END;
	// std::cout << List << std::endl;
	// C_END;
	// std::cout << "Clearing Lists . . ." << std::endl;
	// C_END;
	// List.clearList();

	// List.isEmpty() ? std::cout << "List has been cleared!" << std::endl 
	// : 
	// std::cout << "Error, List failed to clean!\n" << 
	// "Number of items left-over: " << List.listSize() << std::endl;

	return 0;
}