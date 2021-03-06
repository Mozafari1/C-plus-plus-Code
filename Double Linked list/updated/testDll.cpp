// testDll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"../../std_lib_facilities.h"
#include"list.h"

int main()
{
	DLinkedList<int> d;
	d.add_front(1);
	d.add_front(2);
	d.add_front(3);
	cout << "Inserting in front on the list" << endl;
	cout << "Size: " << d.get_size() << endl;
	cout << "Front: " << d.front() << endl;
	cout << "Back: " << d.back() << endl;

	d.add_back(5);
	d.add_back(6);
	d.add_back(7);
	cout << "inserting in front and back on the list" << endl;
	cout <<"Size: "<< d.get_size() << endl;
	cout << "Front: "<<d.front() << endl;
	cout << "Back: " << d.back() << endl;
	cout << " After deleting one Element from front and back on the list" << endl;
	d.remove_back();
	d.remove_front();
	cout << "Size: " << d.get_size() << endl;
	cout << "Front: " << d.front() << endl;
	cout << "Back: " << d.back() << endl;
	d.~DLinkedList();
	keep_window_open();
    return 0;
}

