// updatedCir.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Clist.h"
#include"Queue.h"
int main()
{
	Queue<string> s;
	s.enque("Boys");
	s.enque("Girls");
	s.enque("Coool");
	cout << s.front() << " ";
	s.dequeue();
	cout << s.front() << " ";
	s.dequeue();
	cout << s.front() << " ";
	s.dequeue();
	cout << s.getsize() << endl;

	/*
	Clist<string> c;
	c.add("stayin");
	c.add("le");
	c.add("jive");

	cout << "front:0 " << c.front() << endl;
	cout <<"Back:0 "<< c.back() << endl;
	c.advance();
	cout << "front:1 " << c.front() << endl;
	cout << "Back:1 " << c.back() << endl;
	c.advance();
	cout << "front:2 " << c.front() << endl;
	cout << "Back:2 " << c.back() << endl;
	c.remove();
	c.add("inferno");
	cout << "front:3 " << c.front() << endl;
	cout << "Back:3 " << c.back() << endl;
	*/
	keep_window_open();
    return 0;
}

