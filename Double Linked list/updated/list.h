#pragma once
#include "node.h"

template<typename T>
class DLinkedList {
public:
	DLinkedList();
	~DLinkedList();
	void add_front(const T&);
	void add_back(const T&);
	void remove_front()throw(EmptyDList);
	void remove_back()throw(EmptyDList);
	bool empty();
	int get_size();
	T front() throw (EmptyDList);
	T back() throw(EmptyDList);
private:
	int size;
	DNode<T>* header;
	DNode<T>* trailer;
};
template<typename T>
DLinkedList<T>::DLinkedList() {
	header = nullptr; trailer = nullptr; size = 0;
}
template<typename T>
DLinkedList<T>::~DLinkedList() {
	while (!empty())
	{
		remove_front();
	}
}
template<typename T>
void DLinkedList<T>::add_front(const T& e) {
	DNode<T>* newNode = new DNode<T>(e);
	if (header == nullptr) {
		header = trailer = newNode;
	}
	else {
		header->prev = newNode;
		newNode->next = header;
		header = newNode;
	}
	size++;
}
template<typename T>
void DLinkedList<T>::add_back(const T& e) {
	DNode<T>* newNode = new DNode<T>(e);
	if (trailer == nullptr) {
		trailer = header = newNode;
	}
	else {
		trailer->next = newNode;
		newNode->prev = trailer;
		trailer = newNode;
	}
	size++;
}
template<typename T>
void DLinkedList<T>::remove_front()throw(EmptyDList) {
	if (empty()) throw EmptyDList("Remove_front from empty D_list");
	DNode<T>* oldMor = header;
	
	header = oldMor->next;
	delete oldMor;
	size--;
}
template<typename T>

void DLinkedList<T>::remove_back() throw(EmptyDList) {
	if (empty()) throw EmptyDList("Remove_back from empty D_list");

	
	DNode<T>* oldFar = trailer;
	trailer = oldFar->prev;
	delete oldFar;
	size--;
}
template<typename T>

bool DLinkedList<T>::empty() {
	return size == NULL;
}
template<typename T>

int DLinkedList<T>::get_size() {
	return size;
}
template<typename T>

T DLinkedList<T>::front() throw(EmptyDList) {
	if (empty()) throw EmptyDList("Front from empty D_list");
	return header->Element;
}
template<typename T>

T DLinkedList<T>::back()throw(EmptyDList) {
	if (empty()) throw EmptyDList("Back from empty D_list");
	return trailer->Element;
}
