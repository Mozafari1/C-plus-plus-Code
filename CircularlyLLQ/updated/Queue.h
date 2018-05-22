#pragma once
#include"Clist.h"
#include"RuntimeException.h"
template<typename T>
class Queue {
public:
	Queue():c(){}
	void enque(const T& e){
		c.add(e);
		c.advance();
		size++;
	}
	void dequeue()throw (EmptyQueue){
		if (empty()) throw EmptyQueue("Dequeue of empty queue");
		c.remove();
		size--;
	}
	bool empty() {
		return size == 0;
	}
	T front() throw (EmptyQueue){
		if (empty()) throw EmptyQueue("Front of empty queue");
		 return c.front();
	}
	int getsize() {
		return size;
	}
	
private:
	Clist<T> c;
	int size;
};