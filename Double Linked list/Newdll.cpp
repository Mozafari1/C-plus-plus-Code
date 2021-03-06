// Newdll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include "dLinked.h"
int main()
{
	try {
		DoubleLinkedList<int> front_t;

		front_t.add_front(300);
		front_t.add_front(400);
		front_t.add_front(500);
		DoubleLinkedList<string> front_s;
		front_s.add_front("Double Linked List");
		front_s.add_front("programmering");
		cout << "font_int: " << front_t.front() << endl;
		cout << "front_str:  " << front_s.front() << endl;
		front_t.remove_front(); // removing 500
		cout << "front2 int: " << front_t.front() << endl;
		DoubleLinkedList<int > back;
		back.add_back(900);
		back.add_back(800);

		front_t.~DoubleLinkedList(); // removing all front_t

		DoubleLinkedList<string> b;
		b.add_back("C++");
		b.add_back("template");
		cout << "back int: " << back.back() << endl;
		cout << "back str: " << b.back() << endl;
		b.remove_front(); // now removing the template and front is C++
		cout << "back stsr: " << b.front() << endl;
	}
	catch (exception& e) {
		cout << e.what() << "something went wrong" << endl;
		keep_window_open();
		return 1;
	}
	catch (...) {
		cout << "something went wrong " << endl;
		keep_window_open();
		return 2;
	}
	keep_window_open();
    return 0;
}

