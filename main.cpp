#include "list.h"

int main()
{
	LinkedList<int> List;
	for (int i = 1; i < 9; ++i) List.makeNewNode(i);	
	
	LINE;
	std::cout<<  "||-------------____Displaying All nodes____-------------||";
	LINE;
	std::cout << List << std::endl;

	// LINE;
	// std::cout<<  "||-----------____Iteratoring Through List____-----------||";
	// LINE;
	LinkedList<int>::iterator itr;
	// for (int i = 0; i < 5; ++i)
	// {
	// 	std::cout << itr[i] << "\t";
	// }
	// for (LinkedList<int>::iterator i : List) std::cout << *i << "\t";
	// LINE;
	for (itr = List.begin(); itr != List.end(); ++itr)
	{
		std::cout << *itr << "\t";
	}

	LINE;
	std::cout<<"||-------------____Inserting At Before____--------------||";
	LINE;
	List.insertBefore(7, 0);
	std::cout << List << std::endl;

	LINE;
	std::cout<<  "||------------____Clear all items in list____-----------||";
	LINE;
	std::cout << List << std::endl;
	LINE;
	std::cout << "Clearing Lists . . ." << std::endl;
	LINE;
	List.clearList();
	List.isEmpty() ? std::cout << "List has been cleared!" << std::endl : std::cout << "Error, List failed to clean!\n" << "Number of items left-over: " << List.listSize() << std::endl;
	return 0;
}