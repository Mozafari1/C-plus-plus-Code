// GenericStackLinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
//#include "LinkedSTACK.h"
#include "LinkedS.h"

int main()
{
	LinkedStack<int> o;
	o.Push(24);
	o.Push(123);
	o.Push(234);
	cout << o.Top() << endl;

	/*
	LinkedList<int> L;
	L.Add_element(23);
	L.Add_element(234);
	cout << L.Front_Element() << endl;*/
	keep_window_open();
    return 0;
}

