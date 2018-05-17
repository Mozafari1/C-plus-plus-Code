#pragma once
#include "Node.h"
#include "../../std_lib_facilities.h"
#include "stdafx.h"
template<typename T> 
class singel_list {
public:
	singel_list();
	~singel_list();
	void add_front(const T&);
	void remove_front();
	bool empty();
	T front();
private:
	Node<T>*head;
};
template<typename T> 
singel_list<T>::singel_list() {
	head = nullptr;
}
template<typename T>
singel_list<T>::~singel_list() {
	if (!empty())
		remove_front();
}
template<typename T>
void singel_list<T>::add_front(const T& n) {
	Node<T>* newNode = new Node<T>(n, head);
	head = newNode;
}
template<typename T>
void singel_list<T>::remove_front() {
	if (empty()) error(" empty");
	Node<T>* old = head;
	head = old->get_next();
	delete old;
}
template<typename T>
T singel_list<T>::front() {
	if (empty()) error("The front is empty");
	return head->get_element();
}
template<typename T>
bool singel_list<T>::empty() {
	return head == nullptr;
}
