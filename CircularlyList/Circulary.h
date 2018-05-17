#pragma once
#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include "CNode.h"
template<typename T>
class CLinkedList
{
public:
	CLinkedList();
	~CLinkedList();
	void add(const T&);
	void remove();
	void advance();
	bool empty();
	T front();
	T back();
private:
	CNode<T>* cursor;
};
template<typename T>

CLinkedList<T>::CLinkedList() {
	cursor = nullptr;
}
template<typename T>

CLinkedList<T>::~CLinkedList() {
	while
	 (!empty())
		remove();
}
template<typename T>
void CLinkedList<T>::advance() {
	cursor = cursor->get_next();
}
template<typename T>

void CLinkedList<T>::add(const T& e) {
	CNode<T>* newNode = new CNode<T>(e, cursor);
	cursor = newNode;
}
template<typename T>
T CLinkedList<T>::back() {
	if (empty()) error("empty cursor");
	return cursor->get_element();
}
template<typename T>
T CLinkedList<T>::front() {
	if (empty()) error("empty cursor");
	return cursor->get_next()->get_element();
}
template<typename T>
void CLinkedList<T>::remove() {
	CNode<T>* old_cursor = cursor;
		cursor = cursor->get_next();

	//if (old_cursor == cursor)cursor = NULL;
//	else cursor->get_next() = old_cursor->get_next();
	delete old_cursor;
}
template<typename T>
bool CLinkedList<T>::empty() {
	return cursor == NULL;
}