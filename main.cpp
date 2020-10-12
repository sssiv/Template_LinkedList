#include "list.h"

int main()
{
	std::string dashes(50, '-'); 
	LinkedList<int> List;

	// LinkedList<int>::iterator itr;
	// LinkedList<const char*>::iterator itr2;

	List.makeNewNode(1);
	List.makeNewNode(2);
	List.makeNewNode(3);
	List.makeNewNode(4);
	List.makeNewNode(5);

	//Show current nodes	
	{
	LINE;
	std::cout << dashes << std::endl;
	std::cout<<  "|--------------Displaying All nodes--------------|";
	LINE;
	std::cout << dashes << std::endl;
	std::cout << List << std::endl;
	}
	// for (itr = List.begin(), itr2 = List.end(); itr != itr2; ++itr)
	// {
	// }
	// }

	//Insert at Head
	// {
	// LINE;
	// std::cout << dashes << std::endl;
	// std::cout<<  "|---------------Inserting At Head----------------|";
	// LINE;
	// std::cout << dashes << std::endl;
	// List.insertFirst(7);
	// List2.insertFirst("seven");
	// std::cout << List << std::endl;
	// std::cout << List2 << std::endl;
	// }
	
	// += overload
	// {
	// LINE;
	// std::cout << dashes << std::endl;
	// std::cout<<  "|-------------+= Operator overload---------------|";
	// LINE;
	// std::cout << dashes << std::endl;
	// List += 6;
	// List2 += "six";
	// std::cout << List << std::endl;
	// std::cout << List2 << std::endl;
	// }

	//Delete Head
	{
	LINE;
	std::cout << dashes << std::endl;
	std::cout<<  "|----------------Deleting At Head----------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.deleteNode(1);
	std::cout << List << std::endl;
	}

	//Delete Tail
	{
	LINE;
	std::cout << dashes << std::endl;
	std::cout<<  "|----------------Deleing At Tail-----------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.deleteNode(5);
	std::cout << List << std::endl;
	}

	//Delete Specific Node
	{
	LINE;
	std::cout << dashes << std::endl;
	std::cout<<  "|-------------Deleting At Particular-------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.deleteNode(3);
	std::cout << List << std::endl;
	}

	// LINE;
	// std::cout << dashes << std::endl;
	// std::cout<<  "|----------------Copying a Node------------------|";
	// LINE;
	// std::cout << dashes << std::endl;
	// LinkedList<int> copyList = List;
	// LinkedList<const char*> copyList2 = List2;
	// std::cout << copyList << std::endl;
	// std::cout << copyList2 << std::endl;

	// //Clear Copies
	// {
	// LINE;
	// std::cout << dashes << std::endl;
	// std::cout<<  "|--------------Clearing copied list--------------|";
	// LINE;
	// std::cout << dashes << std::endl;
	// std::cout << copyList << std::endl;
	// std::cout << copyList2 << std::endl;
	// LINE;
	// std::cout << "Clearing copied Lists . . ." << std::endl;
	// copyList.clearList();
	// copyList2.clearList();
	// std::cout << "Number of items: " << copyList.listSize() << std::endl;
	// std::cout << "List one Copy ";
	// copyList.isEmpty() ? std::cout << "is empty." << std::endl : std::cout << "is not empty" << std::endl;
	// LINE;
	// std::cout << "Number of items: " << copyList2.listSize() << std::endl;
	// std::cout << "List two copy ";
	// copyList2.isEmpty() ? std::cout << "is empty." << std::endl : std::cout << "is not empty" << std::endl;
	// LINE;
	// std::cout << "Copied Lists has been cleared!" << std::endl;
	// }

	//List size
	// {
	// LINE;
	// std::cout << dashes << std::endl;
	// std::cout<<  "|---------------Size of each List----------------|";
	// LINE;
	// std::cout << dashes << std::endl;
	// std::cout << "List one " << std::endl;
	// std::cout << "Number of items: " << List.listSize() << std::endl; 
	// List.isEmpty() ? std::cout << "is empty." << std::endl : std::cout << "is not empty" << std::endl;
	// LINE;
	// std::cout << "List two " << std::endl;
	// std::cout << "Number of items: " << List2.listSize() << std::endl;
	// List.isEmpty() ? std::cout << "is empty." << std::endl : std::cout << "is not empty" << std::endl;
	// LINE;
	// }

	LINE;
	std::cout << dashes << std::endl;
	std::cout<<"|--------------Inserting At After----------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.insertAfter(2, 9);
	List.insertAfter(4, 9);
	std::cout << List << std::endl;
	LINE;

	LINE;
	std::cout << dashes << std::endl;
	std::cout<<"|---------------Inserting At Before--------------|";
	LINE;
	std::cout << dashes << std::endl;
	List.insertBefore(4, 8);
	std::cout << List << std::endl;

	//Clear remaining Lists
	LINE;
	std::cout << dashes << std::endl;;
	std::cout<<  "|-------------Clear all items in list------------|";
	LINE;
	std::cout << dashes << std::endl;
	// std::cout << List << std::endl;
	// std::cout << List2 << std::endl;
	// LINE;
	// std::cout << "Clearing Lists . . ." << std::endl;
	// LINE;
	// List.clearList();
	// std::cout << "List one " << std::endl;
	// std::cout << "Number of items: " << List.listSize() << std::endl; 
	// std::cout << "List one ";
	// List.isEmpty() ? std::cout << "is empty." << std::endl : std::cout << "is not empty" << std::endl;
	// LINE;
	// std::cout << "List two ";
	// std::cout << "Number of items: " << List2.listSize() << std::endl;
	// List.isEmpty() ? std::cout << "is empty." << std::endl : std::cout << "is not empty" << std::endl;
	// LINE;
	// std::cout << "Lists has been cleared!" << std::endl;
	// }
	// std::cout<<"\n--------------------------------------------------\n";

	return 0;
}