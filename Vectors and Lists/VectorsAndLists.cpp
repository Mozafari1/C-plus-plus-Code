// VectorsAndLists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

int main()
{/*
	// Her er en tom vektor som ikke har noe i seg
	vector <int> vektor;
	cout << "sizen på vektoren er bør være null: " <<vektor.size() << endl;
	// her er vektor som noen elementer  i seg 
	vector <double> v{ 12,123,123,123,123,123,123123,3243,4,3534 };

	cout << "kapasitenten til vektoren: "<<v.capacity() << endl;			// printer ut kapasisteten til vektoren
	v.push_back(345); // legger til slutten av vektoren, vi kan ikke adde noe foran på en vektor
	v.pop_back();// fjerner den siste elementet i vektoren
	v.erase(v.begin() + 1); // fjerner elementet som er i indeksen til 2
	v.size(); // gir hvor mange element er i veektoren
	//v.clear(); // fjerner alt fra vektoren 

	// her lager jeg en pointer til vektoren
	cout << "starter while løkke"<<endl;
	int i = 0;
	while (i <v.size())
	{
		cout << v[i] << endl;
		i++;
	}
	cout << "starter for løkke med pointer " << endl;

	double *d = v.data();
	for (int i = 0; i <v.size(); i++) {
		cout << "vectoren "<<*d++ << endl;
	}
	// bruker Iterator i vektoren
	cout << "starter for loop med Iterator :" << endl;

	for (vector<double> ::iterator i = v.begin(); i != v.end(); i++) {
		cout << "v : " << *i << endl;
	}

	*/


	/*
	I list kan vi sette in foran og back også kan ta ut foran og back
	Når vi lager en list så må vi bruke iterator for få skrive ut alle elementene som er i listen
	Vi kan ikke lage pointer av list
	*/
	// Nå skal jeg lage en liste med som er tomt

	/*
	list<int> l;
	// list med noen elementer in  is eg
	list<int> lis= { 232,1231,3,345 };

	l.push_back(2213);
	l.push_back(233);
	l.push_back(23);
	l.push_back(230);
	l.push_back(231);
	lis.pop_back(); // fjerner den siste elemente i listen, sier front så fjerner den første
	lis.push_front(1111); // leger foran i listen
	l.sort(); // sortere listen
	list<int>::iterator i = lis.begin();   // her bytter verdien i index nummer 2 fra enden
	i++;
	*i = 20;
	// vi kan også bruke clear funksjon og revers funksjon

	cout << l.front() << endl; // når vi  ønsker å bare printe ut den første elementet i listen
	for (list<int>::iterator i = l.begin(); i != l.end(); i++)
	{
		cout << *i << endl;
	}
	// Men i en list så kan vi reverse listen
	for (list<int> ::reverse_iterator i = lis.rbegin(); i != lis.rend(); i++) {
		cout <<"her skriver vi baklengs: " <<*i << endl;
	}*/


	keep_window_open();
    return 0;
}

