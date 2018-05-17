// lec.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "../../std_lib_facilities.h"
void skriv_file(string filenavn, string text);
void les_file(string filenavn, string& text);

void le(string filenavn, string t);

int main(){
	cout << "enter file name " << endl;
	string fnavn;
	getline(cin, fnavn);

	cout << "skriv here" << endl;
	string text;
	getline(cin,text);

	skriv_file(fnavn, text);
	string lese;
	les_file(fnavn, lese);
	cout << "leser fra filen " << fnavn << ": " << lese << endl;
	
	cout << "eneter file name" << endl;
	string l;
	getline(cin, l);
	le(fnavn, l);
	cout << "nå leser den fra filen som du har tastet inn navnet" << endl;

keep_window_open();
return 0;
}

void le(string fnavn, string t) {

	ifstream ist{ fnavn };
	if (!ist) error(" kunne ikke åpnet filen får lese", fnavn);
	getline(ist, t);

}
void skriv_file(string fnavn, string text) {
	ofstream ofs{ fnavn };
	if (!ofs) error("kunne ikke åpnet filen", fnavn);
	ofs << text << endl;
}
void les_file(string fnavn, string& text) {
	ifstream ist{ fnavn };
	if (!ist) error("kunne ikke åpne filen", fnavn);
	getline(ist, text);
}

