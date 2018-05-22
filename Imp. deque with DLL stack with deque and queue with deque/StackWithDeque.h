#pragma once
#include"Dqueue.h"
template<typename T>
class StackDeque {
public:

	StackDeque():d(){}
	void push(const T &e) {
		d.insert_front(e);
	}
	void pop(){
		d.remove_front();
	}
	int get_size() {
		return d.get_size();
	}
	bool empty(){
		return d.empty();
	}
	T top() {
		return d.front();
	}

private:
	Dqueue<T> d;
};