#pragma once
#include"stdafx.h"
#include "../../std_lib_facilities.h"

template<typename T>
class Queue {
public:
	int get_size();
	bool empty();
	T front();
	void enqueue(T );
	void dequeue();
private:
	T capasity[100];
	int FirstQ = 0; int LastQ = 0; int size = 0;
};
template<typename T>
int Queue<T>::get_size() {
	return size;
}
template<typename T>
bool Queue<T>::empty() {
	return size == 0;

}
template<typename T>
T Queue<T>::front() {
	if (empty())error("Front empty queue");
	T e = capasity[FirstQ];
	return e;
}
template<typename T>
void Queue<T>::enqueue(T e) {
	if (size == 100) error("The enqueue is full");
	capasity[LastQ] = e;
	size++;
	if (LastQ == 99)
		LastQ = 0;
	else 
		LastQ++;
}
template<typename T>
void Queue<T>::dequeue() {
	if (empty()) error("The Dequeue is empty");
	T e = capasity[FirstQ];
	size--;
	if (FirstQ == 99)
		FirstQ = 0;
	else 
		FirstQ++;
}