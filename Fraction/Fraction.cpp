// Fraction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include "Header.h"
int main()
{

	int tel;
	int nev;
	int tell;
	int nevv;
	Fraction f1;
	Fraction f2;
	while (true)
	{
		cout << "enter t 1" << endl;
		cin >> tel;

		f1.set_teller(tel);

		cout << "enter n 1" << endl;
		cin >> nev;
		f1.set_nevner(nev);

		cout << "Enter t 2" << endl;
		cin >> tell;
		f2.set_teller(tell);

		cout << "enter n 2" << endl;
		cin >> nevv;
		f2.set_nevner(nevv);

		if (f1 < f2) {
			cout << "f1 er mindre"<< endl;
		}
		else if (f1 == f2) {
			cout << " de er like" << endl;
		}
		else {
			cout << "f2 er minst" << endl;
		}
		if (f1 < 4) {
			f1 += f2;
			cout << f1.get_teller() <<'\n'
				<<f1.get_nevner()<< endl;
		}

	}
	

	keep_window_open();
    return 0;
}

