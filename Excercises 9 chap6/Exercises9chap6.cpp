// Exercises9chap6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

int main()
{	
//kap 4 ex 19
	cout << "enter name and numbers" << endl;

	vector<string> name;
	vector<int> num;
	string n;
	int t;
	while (cin >> n >> t && n != "quit") {
		bool nameTwice = true;
		string s = n;

		for (int i = 0; i < name.size(); i++) {
			if (name[i] == n) {
				nameTwice = false;
			}
		}if (nameTwice) {
			name.push_back(n);
			num.push_back(t);
		}
		else {

			cout << "Dubplicate inputs" << endl;
		}
		cout << "----------------------" << endl;

		cout << "index" << "      name " << endl;
		cout << "----------------------" << endl;

		for (int i = 0; i < name.size(); i++) {

			cout <<"["<< i <<"]        "<<name[i]<< endl;
			cout <<"[" <<i <<"]        " << num[i] << endl;
		}
	}
	
	
	/*
	try {

		cout << "Enter Some Digits:  To get answer you need to type in any char but not | this is for quit" << endl;
		int digit;

		while (cin >> digit && digit != '|')

			if (!cin) {
				error("Something went wrong");
				return 1;
			}

			else if (digit >= 1000 && digit < 10000) {
				int val2 = digit / 1000;
				cin >> val2;
				int val3 = digit - val2 * 1000;
				cin >> val3;
				int val4 = val3 / 100;
				cin >> val4;
				int val5 = val3 - val4 * 100;
				cin >> val5;
				int val6 = val5 / 10;
				cin >> val6;
				int val7 = val5 - val6 * 10;
				cin >> val7;
				cout << digit << " er " << val2 << " tusen og " << val4 << " hundre og " << val6 << " ti og " << val7 << " en\n";

				keep_window_open();
			}
			else if (digit >= 100 && digit < 1000) {
				int dig2 = digit / 100;
				cin >> dig2;
				int dig3 = digit - dig2 * 100;
				cin >> dig3;
				int dig4 = dig3 / 10;
				cin >> dig4;
				int dig5 = dig3 - dig4 * 10;
				cin >> dig5;
				cout << digit << " er " << dig2 << " hundre og " << dig4 << " ti og " << dig5 << " en \n";
				keep_window_open();
			}

			else if (digit >= 10 && digit < 100) {
				int d = digit / 10;
				cin >> d;
				int dd = digit - d * 10;
				cin >> dd;

				cout << digit << " er " << d << " ti og " << dd << " en\n";
				keep_window_open();
			}
			else {
				cout << "Big inputs: " << endl;
			}


	}
	catch (exception&e) {
		cerr << e.what() << "Errror" << endl;
		keep_window_open();
		return 1;
	}
		
	*/
	keep_window_open();
	return 0;

}


