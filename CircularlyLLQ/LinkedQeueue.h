#pragma once
#include"CircularlyList.h"
#include "ErrorException.h"
#include"stdafx.h"
#include"../../std_lib_facilities.h"
template <typename T>
class LinkedQueue {
public:
	LinkedQueue() : C(), Size(0){}
	int Get_Size() { return Size; }
	bool Empty() {
		return Size == 0;
	}
	T  FrontQueue()throw(QueueEmpty) {
		if (Empty())
			throw QueueEmpty("Front of Empty Queue");
		return C.Front_Element();
	}
	void Dequeue()throw(QueueEmpty) {
		if (Empty())
			throw QueueEmpty("Dequeue of empty queue");
		C.Remove_element();
		Size--;
	}
	void Enqueue(const T&E) {
		C.Add_Element(E);
		C.AdvanceCursor();
		Size++;
	}
private:
	CircularlyCursor<T> C;
	int Size;

};