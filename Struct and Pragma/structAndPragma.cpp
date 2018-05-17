// structAndPragma.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include <fstream> // includerer filestream
#pragma pack(push,1) // bruker pragma for få den riktige plassen  
// uten pragma får jeg 64 bit men i structen min er det bare 62 bit 
// lager en struct og den skal inneholde noe verdier
struct person { 
	char name[50];
	int age;
	double height;
	string land, by;

};

#pragma pack(pop) // den viser  bit
int main()
{	// lager en struct av en person og den er definert i stuct
	person someone = {
		"Rahmat", 23, 170,"Afghanistan", "Kabul"

		// navn, alder, høyde
	};
	// skriver i binary file
	string fileName = "test.bin"; // lager en file med navn test.bin for å srkiver inn binaey og lese fra den senere
	ofstream outputFile; // ofstream står for outfilestream
	outputFile.open(fileName, ios::binary); // åpner filen her bruker jeg fileNavn og ios::binary betyr at ios skal lese fra binary
	if (outputFile.is_open()) { //sjekker om den er filen er åpen
		outputFile.write(reinterpret_cast <char *> (&someone), sizeof(person)); // 
		outputFile.close(); // lukker filen
	}
	else {
		cout << "kunne ikke laget filen" + fileName; // skriver en melding hvis filen kunne ikke ble lagt
	}
	//leser fra binary file
	person someoneElse = {}; // her lager en tomt struct
	ifstream inputFile; // bruker infilestream
	inputFile.open(fileName, ios::binary); // samme som forrige
	if (inputFile.is_open()) {
		inputFile.read(reinterpret_cast <char *> (&someoneElse), sizeof(person));
		inputFile.close();
	}
	else {
		cout << "kunne ikke lese filen" + fileName;
	}
	cout << "Informasjon om" << endl;

	cout <<someoneElse.name <<'\n'
		<<someoneElse.age << '\n'
		<<someoneElse.height<<'\n'
		<<someoneElse.land << '\n'
		<<someoneElse.by<<endl;
	keep_window_open();
    return 0;
}

