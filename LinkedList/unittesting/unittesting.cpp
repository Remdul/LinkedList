#include "gtest\gtest.h"
#include "LinkerDll\LinkerDll.h"
#include <random>


TEST(testStack, headWorks)
{
	LinkedList list;

	// Add to Begin -> empty List
	list.addNodeBegin(1);
	EXPECT_EQ(1, list.at(0));

	// Add to Begin -> List with Values
	list.addNodeBegin(2);
	EXPECT_EQ(2, list.at(0));
	EXPECT_EQ(1, list.at(1));

	// Pop Head of List with Values
	list.popHead();
	EXPECT_EQ(1, list.at(0));

	// Pop Head of list with 1 value
	list.popHead();
	EXPECT_EQ(-1, list.at(0));

}

TEST(testStack, tailWorks)
{
	LinkedList list;

	// Add to End -> Empty List
	list.addNodeEnd(1);
	EXPECT_EQ(1, list.at(0));

	// Add to End -> List with Values
	list.addNodeEnd(2);
	EXPECT_EQ(2, list.at(1));

	// Pop Tail of List with Values
	list.popTail();
	EXPECT_EQ(1, list.at(0));

	// Pop Tail of list with 1 value
	list.popTail();
	EXPECT_EQ(-1, list.at(0));

}

TEST(testStack, middleWorks)
{
	LinkedList list;

	// Populate a list
	list.addNodeEnd(0);
	list.addNodeEnd(1);
	list.addNodeEnd(2);
	EXPECT_EQ(0, list.at(0));
	EXPECT_EQ(1, list.at(1));
	EXPECT_EQ(2, list.at(2));

	list.insertBefore(2, 5);

	EXPECT_EQ(0, list.at(0));
	EXPECT_EQ(1, list.at(1));
	EXPECT_EQ(5, list.at(2));
	EXPECT_EQ(2, list.at(3));
}

/*TEST(testStack, closeTests)
{
	// Windows doesn't like to keep command line open. :/
	int pause;
	std::cin >> pause;
}
*/

