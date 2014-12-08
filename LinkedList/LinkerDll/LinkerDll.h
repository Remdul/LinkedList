#ifndef LINKERDLL_H
#define LINKERDLL_H
#ifdef WIN32
#define EXPORT __declspec(dllexport) 
#else
#define EXPORT 
#endif
#include <iostream>
#include <string>
#include <vector>

struct Node {
	friend class LinkedList;
public:
	Node(void) :_nextNode(NULL), _prevNode(NULL){}                                        // Constructor NO value
	Node(int value) :_value(value), _nextNode(NULL), _prevNode(NULL){}                    // Constructor with Value
	//	Node(int value, Node* nextNode) :_value(value), _nextNode(nextNode), _prevNode(NULL){} // Constructor with Value and Next Point
private:
	int _value;
	Node *_nextNode;
	Node *_prevNode;
};

class LinkedList
{
public:
	EXPORT LinkedList();
	EXPORT ~LinkedList();
	EXPORT void addNodeEnd(int value);
	EXPORT void addNodeBegin(int value);
	EXPORT void insertBefore(int index, int value);
	EXPORT int size() const;
	EXPORT void printList() const;
	EXPORT void reversePrintList() const;
	EXPORT int at(int index) const;
	EXPORT int popHead();
	EXPORT void walk();
	EXPORT int popTail();
	EXPORT int popAt(int index);
	EXPORT int getSize() const;
	EXPORT int operator[](int i){ return at(i); }
	EXPORT std::vector<int> asVector() const;
private:
	Node *_listHead;                                                    // Where doos list start?
	Node *_listTail;                                                    // Where does list end?
	int _size = 0;
};


#endif
