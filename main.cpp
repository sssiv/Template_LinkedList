#include "list.h"

int main()
{
	std::string dashes(50, '='); 
	LinkedList<int> List;
	for (int i = 1; i <= 5; ++i) List.makeNewNode(i);	
	
	LINE;
	std::cout << dashes << std::endl;
	std::cout<<  "|--------------Displaying All nodes--------------|";
	LINE;
	std::cout << dashes << std::endl;
	std::cout << List << std::endl;

	// LINE;
	// std::cout << dashes << std::endl;
	// std::cout<<  "|------------Iteratoring Through List------------|";
	// LINE;
	// LinkedList<int>::iterator itr, itr2;
	// std::cout << dashes << std::endl;
	// for (int i = 0; i < 5; ++i)
	// {
	// 	std::cout << itr[i] << "\t";
	// }
	// LINE;
	// for (itr = List.begin(); itr != List.end(); ++itr)
	// {
	// 	std::cout << *itr << "\t";
	// }

	LINE;
	std::cout << dashes << std::endl;
	std::cout<<  "|----------------Deleting At Head----------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.deleteNode(1);
	std::cout << List << std::endl;

	//Delete Tail
	
	LINE;
	std::cout << dashes << std::endl;
	std::cout<<  "|----------------Deleing At Tail-----------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.deleteNode(5);
	std::cout << List << std::endl;
	

	//Delete Specific Node
	
	LINE;
	std::cout << dashes << std::endl;
	std::cout<<  "|-------------Deleting At Particular-------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.deleteNode(3);
	std::cout << List << std::endl;

	LINE;
	std::cout << dashes << std::endl;
	std::cout<<"|--------------Inserting At After----------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.insertAfter(2, 9);
	List.insertAfter(4, 3);
	List.insertAfter(9, 7);
	std::cout << List << std::endl;
	LINE;

	LINE;
	std::cout << dashes << std::endl;
	std::cout<<"|---------------Inserting At Before--------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.insertBefore(7, 8);
	std::cout << List << std::endl;

	LINE;
	std::cout << dashes << std::endl;;
	std::cout<<  "|-------------Clear all items in list------------|";
	LINE;
	std::cout << dashes << std::endl;
	std::cout << List << std::endl;
	LINE;
	std::cout << "Clearing Lists . . ." << std::endl;
	LINE;
	List.clearList();
	List.isEmpty() ? std::cout << "List has been cleared!" << std::endl : std::cout << "Error, List failed to clean!\n" << "Number of items left-over: " << List.listSize() << std::endl;
	std::cout<< dashes << std::endl;
	return 0;
}