// exercises_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
int main()
{
	
	ifstream file("text.txt");
	ofstream newFile("test.txt");
	char ch;
	int c = 0;
	while (!file.eof())
	{
		ch = file.get();
		cout << ch;

		if (ch == ' ') {
			c++;
		}

		 if (ch == 'a') {
			ch = 'e';
			newFile << ch;
		}
		
		else if (ch == '9') {
			string b = " nine";
			newFile << b;
		}
	
		else {
			newFile << ch;

		
		}


	}
	cout << "wwww" << c;


	cout << endl;
	newFile.close();
	file.close();

	keep_window_open();
    return 0;
}
