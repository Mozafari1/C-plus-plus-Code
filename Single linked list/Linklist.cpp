// Linklist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"../../std_lib_facilities.h"
#include "link.h"
int main()
{
	singel_list<int> ad_front;
	ad_front.add_front(1);
	ad_front.add_front(2);
	ad_front.add_front(3);
	cout << ad_front.front() << endl;
	cout << ad_front.front() << endl;
	ad_front.remove_front();
	cout << ad_front.front() << endl;

	keep_window_open();
    return 0;
}

