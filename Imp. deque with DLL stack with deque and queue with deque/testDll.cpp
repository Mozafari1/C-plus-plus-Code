// testDll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"../../std_lib_facilities.h"
#include"list.h"
#include"Dqueue.h"
#include"StackWithDeque.h"
#include"QueueWithDeque.h"
int main()
{
	QueueDeque<string> q;
	q.enqueue("first");
	q.enqueue("last");
	q.enqueue("n+1");
	cout << "size: "<<q.size() << endl;
	cout << "Front: " << q.front() << endl;
	cout << "Deque Stack start" << endl;
	StackDeque<string> dd;
	dd.push("Love");
	dd.push("lovlig");
	dd.push("Nice");
	cout << "Size: "<<dd.get_size() << endl;
	cout << "Top: " << dd.top() << endl;
	cout << "Deque starts" << endl;
	Dqueue<int> t;
	t.insert_front(1000);
	t.insert_front(2000);
	t.insert_front(3000);
	t.insert_back(100000);
	t.remove_back();
	cout << "Front: "<<t.front() << endl;
	cout << "Back: " << t.back() << endl;
	cout << "start list" << endl;
	DLinkedList<int> d;
	d.add_front(1);
	d.add_front(2);
	d.add_front(3);
	cout << "Inserting in front on the list" << endl;
	//cout << "Size: " << d.get_size() << endl;
	cout << "Front: " << d.front() << endl;
	cout << "Back: " << d.back() << endl;

	d.add_back(5);
	d.add_back(6);
	d.add_back(7);
	cout << "inserting in front and back on the list" << endl;
	//cout <<"Size: "<< d.get_size() << endl;
	cout << "Front: "<<d.front() << endl;
	cout << "Back: " << d.back() << endl;
	cout << " After deleting one Element from front and back on the list" << endl;
	d.remove_back();
	d.remove_front();
	//cout << "Size: " << d.get_size() << endl;
	cout << "Front: " << d.front() << endl;
	cout << "Back: " << d.back() << endl;
	d.~DLinkedList();
	keep_window_open();
    return 0;
}

