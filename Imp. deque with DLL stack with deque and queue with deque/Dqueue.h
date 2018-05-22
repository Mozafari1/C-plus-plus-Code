#pragma once
#include"list.h"
template<typename T>
class Dqueue {
public:
	Dqueue() :d() { size = 0; }
	int get_size() { return size; }
	bool empty() { return size == 0; }
	void insert_back(const T& e){
		d.add_back(e);
		size++;
	}
	void insert_front(const T& e){
		d.add_front(e);
		size++;
	}
	T front(){
		return d.front();
	}
	T back(){
		return d.back();
	}
	void remove_back(){
		d.remove_back();
		size--;
	}
	void remove_front(){
		d.remove_front();
	}

private:
	DLinkedList<T> d;
	int size;
};