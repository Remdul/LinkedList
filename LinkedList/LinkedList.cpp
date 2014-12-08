// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "LinkerDll.h"

#define mark() {std::cout << "Location: " << __LINE__ << std::endl;}

int _tmain(int argc, _TCHAR* argv[])
{
	LinkedList listMain;
	bool quitProgram = false; 
	const int addtoList = 20;
	std::vector<int>expectedValues;
	std::cout << "Welcome to Bryan's Linker Program!" << std::endl;
	std::cout << "Please Selection an option from the following Menu... " << std::endl;


	while (quitProgram != true)
	{
		std::cout << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "1) Print List" << std::endl;
		std::cout << "2) Add Random Variables" << std::endl;
		std::cout << "3) Add to beginning of List" << std::endl;
		std::cout << "4) Add to End of List" << std::endl;
		std::cout << "5) Pop Head" << std::endl;
		std::cout << "6) Pop Tail" << std::endl;
		std::cout << "7) Pop At" << std::endl;
		std::cout << "8) Get Value At" << std::endl;
		std::cout << "9) Insert Before Value" << std::endl;
		std::cout << "10) Get size" << std::endl;
		std::cout << "11) Walk List (memtest)" << std::endl;
		std::cout << "12) Print as Vector" << std::endl;
		std::cout << "13) Print List Backwards" << std::endl;
		std::cout << "0) Quit" << std::endl;
		std::cout << "------------------------------------------------------" << std::endl << std::endl;
		int answer;
		int value;
		int index;
		std::cin >> answer;

		if (answer == 1)
		{
			listMain.printList();
		}
		else if (answer == 2)
		{
			for (int i = 0; i < addtoList; i++)
			{
				listMain.addNodeEnd(i);
			}
		}

		else if (answer == 3)
		{
			std::cout << "Value: " << std::endl;
			std::cin >> value;
			listMain.addNodeBegin(value);
		}
		else if (answer == 4)
		{
			std::cout << "Value: " << std::endl;
			std::cin >> value;
			listMain.addNodeEnd(value);
		}
		else if (answer == 5)
		{
			listMain.popHead();
		}
		else if (answer == 6)
		{
			listMain.popTail();
		}
		else if (answer == 7)
		{
			std::cout << "Location: " << std::endl;
			std::cin >> index;
			listMain.popAt(index);
		}
		else if (answer == 8)
		{
			std::cout << "Location: " << std::endl;
			std::cin >> index;
			std::cout << listMain.at(index) << std::endl;
		}
		else if (answer == 9)
		{
			std::cout << "Location: " << std::endl;
			std::cin >> index;
			std::cout << "Value: " << std::endl;
			std::cin >> value;
			listMain.insertBefore(index, value);
		}
		else if (answer == 10)
		{
			std::cout << listMain.getSize() << std::endl;
		}
		else if (answer == 11)
		{
			listMain.walk();
		}
		else if (answer == 12)
		{
			for (auto iter : listMain.asVector())
			{
				std::cout << iter << std::endl;
			}
		}
		else if (answer == 13)
		{
			listMain.reversePrintList();
		}
		else if (answer == 0)
		{
			quitProgram = true;
		}
		else {
			std::cout << "Invalid Option." << std::endl;
		}
	}
	return 0;
}


