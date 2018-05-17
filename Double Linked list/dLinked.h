#pragma once
#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include "Node.h"

template<typename T> // using template adn implementing a generic double linked list

class DoubleLinkedList {		
public:
	DoubleLinkedList();		// constructor take no parameter
	~DoubleLinkedList();	// deconstrctor take no parameter
	void add_front(const T&); // making a void function and adding to front of list
	void add_back(const T&); // adding to back/rear of list
	T front(); // making a function of type T and geting the front element
	T back(); // get rear element
	bool empty(); // is list empty checking
	void remove_front(); // deleing function
	void remove_back(); // 
	void DListReverse(DoubleLinkedList<T> &);
	int get_size(); // geting size element/ we dont need this if we dont calling the deconstructor. if we wanna deleting all front or back then we calling decons...
private:
	DoubleNode<T>* header; // pointer to header / previous
	DoubleNode<T>*trailer;  // pointer to trailer/ next
	int size; // size
};
template<typename T> 
DoubleLinkedList<T>::DoubleLinkedList() { // calling constructor and setting header, trailer, and size to nullpointer and size to null

	header = nullptr; header = nullptr; size = 0;
	
}
template<typename T>
DoubleLinkedList<T>::~DoubleLinkedList() { // destructor and deleting if front is not empty
	while (!empty())
		remove_front(); //delete header;  delete trailer;

}

template<typename T>

void DoubleLinkedList<T>::add_back(const T& e) { // adding to back 
	DoubleNode<T>* new_back = new DoubleNode<T>(e, header, trailer); // maiking a new node and trailer get the value of the newnode
	trailer = new_back;
	header = trailer; 
	size++; 
	}
template<typename T>
void DoubleLinkedList<T>::add_front(const T& e) { // 
	DoubleNode <T>* new_front = new DoubleNode<T>(e, header, trailer); // Remember that DoubleNode constructor takes three parameter
	header = new_front;
	trailer = header;
	size++;
	}
template<typename T>
void DoubleLinkedList<T>::remove_back() { // removing 
	if (empty()) error("empty to remove_front"); // checking if the back is empty and printing out a message
	DoubleNode<T>* old_back = trailer; // makking a copy 
	trailer = old_back->get_prev(); // now the trailer point to the previous
	delete old_back; // deleting old 
	size--; // size goes down
}

template<typename T> 
void DoubleLinkedList<T>::remove_front() { // remove front
	if (empty()) error("Can't remove_front, Empty");
	DoubleNode<T>*old_front = header;
	header = old_front->get_next();
	delete old_front;
	size--;
}
template<typename T>
T DoubleLinkedList<T>::front() { // calling front function and header point to get_element and get the front element
	if (empty()) error("Front is empty");
	return header->get_element();
}
template<typename T>

T DoubleLinkedList<T>::back() {
	if (empty()) error("Back is empty");
	return trailer->get_element();
}
// We dont need this if we dont wanna call destrc.....
template<typename T>
int DoubleLinkedList<T>::get_size() {
	return size;
}

template<typename T>
bool DoubleLinkedList<T>::empty() {
	return size == 0;
	//return header->get_next() == trailer;
}
template<typename T> 
void DoubleLinkedList<T>::DListReverse(DoubleLinkedList<T>& lisa) {
	DoubleLinkedList<T> t;
	while (!lisa.empty()) {
		T s = lisa.front(); lisa.remove_front();
		t.add_front(s);
	}
	while (!lisa.empty())
	{
		T s = lisa.back(); lisa.remove_back();
		t.add_back(s);
	}
}
