#pragma once
#include"Dqueue.h"

template<typename T>
class QueueDeque {

public:
	int size() {
		return q.get_size();
	}
	bool empty() {
		return q.empty();
	}
	void enqueue(const T &e) {
		q.insert_back(e);
	}
	void dequeue() {
		q.remove_front();

	}
	T front() {
		return q.front();
	}

private:
	Dqueue<T> q;
};