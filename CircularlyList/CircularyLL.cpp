// CircularyLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include "Circulary.h"

int main()
{
	CLinkedList<string> c;
	c.add("Staylist");
	c.add("Freak");
	c.add("Talin");

	cout << c.back() << " ";
	cout << c.front() << endl;
	c.advance();
	c.advance();
	cout << c.back() << " ";
	c.remove();
	c.add("Dico");
	cout << c.back() << endl;
	keep_window_open();
    return 0;
}
