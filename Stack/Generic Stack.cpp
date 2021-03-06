// Generic Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"../../std_lib_facilities.h"
#include "Stack.h"

int main()
{
	GStack<int> s;
	s.push(2020);
	s.push(2019);
	s.push(2018);
	cout << "Top: "<<s.top() << endl;
	cout << "size: "<<s.get_size() << endl;
	s.pop();
	cout << "Top: " << s.top() << endl;
	cout << "size: " << s.get_size() << endl;
	s.push(2018);
	cout << "Top: " << s.top() << endl;
	cout << "size: " << s.get_size() << endl;
	keep_window_open();
    return 0;
}

