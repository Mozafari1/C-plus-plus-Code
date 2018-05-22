// Queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"../../std_lib_facilities.h"
#include "Queue.h"

int main()
{
	Queue<int> q;
	q.enqueue(23);
	q.enqueue(234);
	cout << q.get_size() << endl;
	//cout << q.front() << endl;
	q.dequeue();
	q.dequeue();

	q.enqueue(1222);
	q.enqueue(2344);
	cout << q.front() << endl;


	cout << q.get_size() << endl;

	keep_window_open();
    return 0;
}

