// CircularlyLinkedListQueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
//#include"CircularlyList.h"
#include"LinkedQeueue.h"

int main()
{
	/*
	CircularlyCursor<int> s;
	s.Add_Element(23);
	s.Add_Element(3242);
	cout << s.Front_Element() << endl;
	cout << s.Back_Element() << endl;
	*/
	LinkedQueue<int> S;
	S.Enqueue(23);
	S.Enqueue(234);
	cout << S.FrontQueue() << endl;
	keep_window_open();
    return 0;
}

