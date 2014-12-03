#ifndef LINKERDLL_H
#define LINKERDLL_H
#include <iostream>
#include <string>
#include <vector>

struct Node {
	friend class LinkedList;
public:
	Node(void) :_nextNode(NULL){}                                        // Constructor NO value
	Node(int value) :_value(value), _nextNode(NULL){}                    // Constructor with Value
	Node(int value, Node* nextNode) :_value(value), _nextNode(nextNode){} // Constructor with Value and Next Point
private:
	int _value;
	Node *_nextNode;
};

class LinkedList
{
public:
	__declspec(dllexport) LinkedList();
	__declspec(dllexport) ~LinkedList();
	__declspec(dllexport) void addNodeEnd(int value);
	__declspec(dllexport) void addNodeBegin(int value);
	__declspec(dllexport) void insertBefore(int index, int value);
	__declspec(dllexport) int size() const;
	__declspec(dllexport) void printList() const;
	__declspec(dllexport) int at(int index) const;
	__declspec(dllexport) int popHead();
	__declspec(dllexport) void walk();
	__declspec(dllexport) int popTail();
	__declspec(dllexport) int popAt(int index);
	__declspec(dllexport) int getSize() const;
	__declspec(dllexport) int operator[](int i){ return at(i); }
	__declspec(dllexport) std::vector<int> asVector() const;
private:
	Node *_listHead;                                                    // Where doos list start?
	Node *_listTail;                                                    // Where does list end?
	int _size;
};


#endif
