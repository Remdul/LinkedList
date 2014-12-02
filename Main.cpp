#include <iostream>
#include "LinkedList.h"
#define mark() {std::cout << "Location: " << __LINE__ << std::endl;}

#define ASSERT_EQUAL(EXPRESSION, EXPECTED) \
std::cout << "Testing" << #EXPRESSION << "is equal to " << #EXPECTED << ": ";\
if (EXPECTED == (EXPRESSION))\
{std::cout << "PASS\n";}\
else {std::cout << "FAIL\n";}\

#define VECTORLISTCOMP(VECTOR, LIST) \
std::cout << "Testing " << #VECTOR << " is equal to " << #LIST << ": ";\
for (int i = 0; i < VECTOR.size(); i++)\
{if (LIST.at(i) == VECTOR[i]){std::cout << "True for " << i << std::endl;}\
else{std::cout << "False for " << i << std::endl;}}\

int main(int argc, const char * argv[])
{
    LinkedList listMain;
    const int addtoList = 20;
    std::vector<int>expectedValues;
    for (int i = 0; i < addtoList; i++)
    {
        listMain.addNodeEnd(i);
    }
    listMain.printList();
    std::cout <<"SIZE:: "<< listMain.getSize() << std::endl;
//    ASSERT_EQUAL(listMain.popAt(1), 5);
    listMain.popAt(7);
    listMain.printList();
    std::cout <<"SIZE:: "<< listMain.getSize() << std::endl;
    listMain.addNodeEnd(44);
    listMain.printList();
    std::cout <<"SIZE:: "<< listMain.getSize() << std::endl;

    expectedValues = listMain.asVector();
    VECTORLISTCOMP(expectedValues, listMain);
    std::cout << "Calling Destructor...." << std::endl;
}
