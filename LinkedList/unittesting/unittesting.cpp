#include "gtest\gtest.h"
#include "LinkerDll\LinkerDll.h"
#include <random>

TEST(testStack, simpletest)
{
	srand((unsigned)time(0));

	LinkedList list;
	list.addNodeBegin(1);
	EXPECT_EQ(1, list.at(0));
}