// =================================================================
//
// File: list.h
// Author:
// Date:
//
// =================================================================
#ifndef LIST_H
#define LIST_H

#include <string>

template <class T>
class List;

// =================================================================
// Definition of the Node class
// =================================================================
template <class T>
class Node
{
private:
	Node(T);
	Node(T, Node<T> *);

	T data;
	Node<T> *next;

	friend class List<T>;
};

// =================================================================
// Constructor. Initializes the data of the node. The variable next
// is initialized to nullptr.
//
// @param val, stored data in the node.
// =================================================================
template <class T>
Node<T>::Node(T val) : data(val), next(nullptr)
{
}

// =================================================================
// Constructor. Initializes both instance variables.
//
// @param val, stored data in the node.
// @param nxt, the next node.
// =================================================================
template <class T>
Node<T>::Node(T val, Node *nxt) : data(val), next(nxt)
{
}

// =================================================================
// Definition of the List class
// =================================================================
template <class T>
class List
{
private:
	Node<T> *head;
	int size;

public:
	List();
	~List();

	int length() const;
	bool empty() const;

	void create(T);
	void create(T, int);
	int read(T) const;
	T get(int) const;
	void update(T, int);
	bool del(T);
	T clear(int);
	void clear();

	std::string string() const;
};

// =================================================================
// Constructor. Initializes both instance variables to zero.
// =================================================================
template <class T>
List<T>::List() : head(nullptr), size(0)
{
}

// =================================================================
// Destructor. Removes all items from the list.
// =================================================================
template <class T>
List<T>::~List()
{
	clear();
}

// =================================================================
// Adds an element at the start of the linked list. The element that
// was at the begining is shifted to the right.
//
// Worst case complexity: O()
// =================================================================
template <class T>
void List<T>::create(T val)
{
}

// =================================================================
// Adds an element in index (0 <= index <= size). The element that
// was in that position is shifted to the right.
//
// Worst case complexity: O()
// =================================================================
template <class T>
void List<T>::create(T val, int index)
{
}

// =================================================================
// Returns the position of an item in the list.
//
// @returns the position of an item in the list, -1 otherwise.
//
// Worst case complexity: O()
// =================================================================
template <class T>
int List<T>::read(T val) const
{
}

// =================================================================
// Returns the value of an item at the given position in the list.
//
// @returns the value of an item at the given position in the list.
//
// Worst case complexity: O()
// =================================================================
template <class T>
T List<T>::get(int index) const
{
}

// =================================================================
// Updates the value of an element at the given position.
//
// Worst case complexity: O()
// =================================================================
template <class T>
void List<T>::update(T val, int index)
{
}

// =================================================================
// Deletes the element found in index (0 <= index <size).
//
// @returns the element that was at the index.
//
// Worst case complexity: O()
// =================================================================
template <class T>
T List<T>::clear(int index)
{
}

// =================================================================
// Removes all the items from the list.
//
// Worst case complexity: O()
// =================================================================
template <class T>
void List<T>::clear()
{
}

// =================================================================
// Deletes the first instance of the given value and returns true
// if an element was deleted.
//
// @returns true if the first instance of the value was found and
// 			deleted.
//
// Worst case complexity: O()
// =================================================================
template <class T>
bool List<T>::del(T val)
{
}

// =================================================================
// Returns the number of items in the list.
//
// @returns size, the number of items in the list.
// =================================================================
template <class T>
int List<T>::length() const
{
	return size;
}

// =================================================================
// Returns true if the list is empty or false if not.
//
// @returns true if the list is empty, false otherwise.
// =================================================================
template <class T>
bool List<T>::empty() const
{
	return (head == nullptr);
}

// =================================================================
// String representation of the elements in the list.
//
// @returns a string containing all the elements of the list.
// =================================================================
template <class T>
std::string List<T>::string() const
{
	std::stringstream aux;
	Node<T> *p;

	p = head;
	aux << "[";
	while (p != nullptr)
	{
		aux << p->data;
		if (p->next != nullptr)
		{
			aux << ", ";
		}
		p = p->next;
	}
	aux << "]";
	return aux.str();
}

#endif /* LIST_H */