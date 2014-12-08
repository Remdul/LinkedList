#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include "LinkerDll.h"

void LinkedList::walk()
{
	Node *current = _listHead;
	while (NULL != current)
	{
		current = current->_nextNode;
	}
	current = _listTail;
	while (NULL != current)
	{
		current = current->_nextNode;
	}
}

LinkedList::LinkedList()
{
	_listHead = NULL;
	_listTail = NULL;
	_size = 0;
}

LinkedList::~LinkedList()
{
	Node *deleteNode = _listHead;
	Node *nextDeleteNode;
	if (_listHead == NULL)
	{
		std::cout << "Memory has been Chomped." << std::endl;
		return;
	}
	int i = 0;
	while (NULL != deleteNode) {
		if (deleteNode->_nextNode == NULL)
		{
			std::cout << "Deleting last node" << std::endl;
			delete deleteNode;
			return;
		}
		std::cout << "Deleting node " << i++ << std::endl;
		nextDeleteNode = deleteNode->_nextNode;
		delete deleteNode;
		deleteNode = nextDeleteNode;
	}
}

void LinkedList::printList() const
{
	Node *printNode = _listHead;
	if (_listHead == NULL)
	{
		std::cout << "List is Empty. You Fail." << std::endl;
		return;
	}
	std::cout << "LinkedList Contents: " << std::endl;
	
	int count = 0;
	while (printNode != NULL) 
	{
		std::cout << count << " : " << printNode->_value << " > "<< std::endl;
		if (printNode->_nextNode == NULL)
		{
			std::cout << "   nextNode = NULL" << std::endl;
		}
		else
		{
			std::cout << "   nextNode Value: " << printNode->_nextNode->_value << std::endl;
		}
		if (printNode->_prevNode == NULL)
		{
			std::cout << "   prevNode = NULL" << std::endl;
		}
		else
		{
			std::cout << "   prevNode Value: " << printNode->_prevNode->_value << std::endl;
		}

		count++;
		printNode = printNode->_nextNode;
	}
}

void LinkedList::reversePrintList() const
{
	Node *printNode = _listTail;
	if (_listHead == NULL)
	{
		std::cout << "List is Empty. You Fail." << std::endl;
		return;
	}
	std::cout << "LinkedList Contents: " << std::endl;
	while (printNode != NULL) {
		std::cout << printNode->_value << std::endl;
		printNode = printNode->_prevNode;
	}
}

void LinkedList::addNodeEnd(int value)
{
	walk();
	if (_listHead == NULL)
	{
		Node *newNode = new Node(value);
		_size += 1;
		_listHead = newNode;
		_listTail = newNode;
	}
	else
	{
		Node *newNode = new Node(value);
		newNode->_prevNode = _listTail;
		_size += 1;
		Node *current = _listTail;
		current->_nextNode = newNode;
		_listTail = newNode;
	}
}

void LinkedList::addNodeBegin(int value)
{
	walk();
	if (_listHead == NULL)
	{
		Node *newNode = new Node(value);
		_size += 1;
		_listHead = newNode;
		_listTail = newNode;
	}
	else
	{
		Node *newNode = new Node(value);
		_size += 1;
		newNode->_nextNode = _listHead;
		_listHead->_prevNode = newNode;
		_listHead = newNode;
	}
}

int LinkedList::size() const
{
	Node *current = _listHead;
	int count = 0;
	bool cont = true;
	while (cont == true)
	{
		count++;
		if (current->_nextNode != NULL)
		{
			current = current->_nextNode;
		}
		else
		{
			cont = false;
		}
	}
	return count;
}

int LinkedList::getSize() const
{
	return _size;
}

int LinkedList::at(int index) const
{
	Node *findNode = _listHead;
	int indexCounter = 0;
	while (NULL != findNode)
	{
		if (NULL == findNode)
		{
			return -1;
		}
		if (indexCounter == index)
		{
			return findNode->_value;
		}
		findNode = findNode->_nextNode;
		indexCounter += 1;
	}
	// Failed to find in List
	return -1;
}
void LinkedList::insertBefore(int index, int value)
{
	Node *findNode = _listHead;
	int indexCounter = 0;
	if (_listHead == NULL || index == 0)
	{
		addNodeBegin(value);
		return;
	}
	if (index >= size())
	{
		addNodeEnd(value);
		return;
	}
	Node *insertNode = new Node(value);

	while (_listTail != findNode)
	{
		if (indexCounter == (index - 1))
		{
			insertNode->_nextNode = findNode->_nextNode;
			findNode->_nextNode->_prevNode = insertNode;
			insertNode->_prevNode = findNode;
			findNode->_nextNode = insertNode;
			std::cout << "I get here1 " << std::endl;
			_size += 1;
			return;
		}
		findNode = findNode->_nextNode;
		indexCounter += 1;
	}
	// Should Never Get here. Just in case...
	delete insertNode;
	addNodeEnd(value);
	return;
}
int LinkedList::popHead()
{
	walk();
	int poppedValue;
	if (_listHead == NULL)
	{
		return -1;
	}
	if (_listHead == _listTail)
	{
		delete _listHead;
		_size -= 1;
		_listHead = NULL;
		_listTail = NULL;
		return -1;
	}
	Node *nextNode = _listHead->_nextNode;

	poppedValue = _listHead->_value;
	delete _listHead;
	_size -= 1;
	_listHead = nextNode;
	_listHead->_prevNode = NULL;
	return poppedValue;
}
int LinkedList::popTail()
{
	walk();
	int poppedValue;
	if (_listHead == NULL)
	{
		return -1;
	}
	if (_listHead == _listTail)
	{
		delete _listHead;
		_size -= 1;
		_listHead = NULL;
		_listTail = NULL;
		return -1;
	}
	Node *nextNode = _listHead;

	while (_listTail != nextNode->_nextNode)
	{
		nextNode = nextNode->_nextNode;
	}
	poppedValue = _listTail->_value;
	delete _listTail;
	_size -= 1;
	nextNode->_nextNode = NULL;
	_listTail = nextNode;
	return poppedValue;
}
int LinkedList::popAt(int index)
{
	walk();
	if (NULL == _listHead)
	{
		return -1;
	}
	if (_listHead == _listTail)
	{
		delete _listHead;
		_size -= 1;
		_listHead = NULL;
		_listTail = NULL;
		return -1;
	}
	if (0 == index)
	{
		popHead();
		return -1;
	}

	if ((_size - 1) == index)
	{
		popTail();
		return -1;
	}
	if (_size < index)
	{
		return -1;
	}
	Node *findNode = _listHead;
	int indexCounter = 0;
	while (NULL != findNode)
	{
		if (indexCounter == (index - 1))
		{
			Node *tempNode = findNode->_nextNode;
			findNode->_nextNode = tempNode->_nextNode;
			tempNode->_nextNode->_prevNode = findNode;
			delete tempNode;
			_size -= 1;
			return -1;
		}
		findNode = findNode->_nextNode;
		indexCounter += 1;
	}
	return -1;
}

std::vector<int> LinkedList::asVector() const
{
	std::vector<int> values;
	for (int i = 0; i < _size; i++)
	{
		values.push_back(at(i));
	}
	return values;
}
