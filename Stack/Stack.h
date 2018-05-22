#pragma once
#include"stdafx.h"
#include"../../std_lib_facilities.h"
template<typename T>
class GStack {
public:
	int get_size();
	bool empty();
	T top();
	void push(T );
	void pop();
private:
	int size = 0;
	T capacity[100];

};
template<typename T>
int GStack<T>::get_size() {
	return size;
}
template<typename T>
bool GStack<T>::empty() {
	return size == NULL;
}
template<typename T>
T GStack<T>::top() {
	if (empty()) error("Empty front from stack");
	return capacity[size-1];
}
template<typename T>
void GStack<T>::push(T E) {
	if (size == 100) error("Push onto full stack");
	capacity[size] = E;
	size++;
}
template<typename T>
void GStack<T>::pop() {
	if (empty()) error("Pop from empty stack");
	T E = capacity[size - 1];
	size--;

}