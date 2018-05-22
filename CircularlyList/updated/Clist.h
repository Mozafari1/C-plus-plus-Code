#pragma once
#include"node.h"
template <typename T>
class Clist {
public:
	Clist();
	~Clist();
	void add(const T&);
	void advance();
	void remove();
	T front();
	T back();
	bool empty();
	//int get_size();
private:
	//int size;
	Cnode<T>* cursor;
};
template <typename T>

Clist<T>::Clist() {
	cursor = nullptr;
	//size = 0;
}
template <typename T>
Clist<T>::~Clist() {
	while (!empty())
	{
		remove();
	}
}
template <typename T>
void Clist<T>::add(const T& el) {
	Cnode<T>* newnode = new Cnode<T>(el);
	if (cursor == nullptr) {
		newnode->next = newnode;
		cursor = newnode;
	}
	else {
		newnode->next = cursor->next;
		cursor->next = newnode;
	}
	//size++;
}
template <typename T>
void Clist<T>::advance() {
	cursor = cursor->next;
}
template <typename T>
T Clist<T>::front(){
	if (empty()) error("empty front");
	return cursor->next->Element;
}
template <typename T>
T Clist<T>::back() {
	if (empty()) error("empty back");
	return cursor->Element;
}
template <typename T>
bool Clist<T>::empty() {
	return cursor == NULL;
	//return size == 0;
}
/*
template <typename T>

int Clist<T>::get_size() {
	return size;
}
*/
template <typename T>
void Clist<T>::remove() {
	Cnode<T>* oldnode = cursor->next;
	cursor->next = oldnode->next;
	delete oldnode;
	//size--;
}