// drill_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
int f(int cc) {
	int flag = 1;
	if (cc % 2 == 0)
		flag = 0;
	return flag;
}
int main()
{
	int nm;
	cout << "enter some number" << endl;
	cin >> nm;
	if (f(nm))
		cout << "yes" << endl;
	else cout << "no" << endl;

	char cha;
	int na = 0, nb =0, nc = 0, nn=0;
	while ((cha=cin.get())!='.')
	{
		switch (cha) {
		case'a': ++na; break;
		case 'b': ++nb; break;
		case 'c': ++nc; break;
		default: ++nn;
		}

	}
	cout << "na: " << na << endl;
	cout << "nb: " << nb << endl;
	cout << "nc: " << nc << endl;
	cout << "n: " << nn << endl;


	int d, f, g=1;
	cout << "enter x" << endl;
	cin >> d;
	cout << "enter y" << endl;
	cin >> f;
	int i = 1;
	//					kan skrives på to måter
	//while (i++<f)
	//{
	//	g = g * d;
	//	i++;
	//}

	while (i++ < f)
		g *= d;
	{

	}
	cout << "z = " << g << endl;
	int bound;
	cout << "bount: " << endl;
	cin >> bound;
	int f0 = 0, f1 = 1, f2;
	cout << f0 <<'\t'<< f1<<'\t';
	while (true)
	{
		f2 = f0 + f1;
		if (f2 > bound)break;
		cout << f2 << '\t';
		f0 = f1;
		f1 = f2;
	}
	int n, w, q=0;
	cin >> n;
	while (n>0)
	{
		w = n % 10;
		q = q * 10 + w;
		n = n / 10;
	}
	cout << q;
	int a, b;
	cout << "enter ..." << endl;
	cin >> a >> b;
	for (double i = a; i <= b; i=i+10)
		cout << i << '\t';
		cout<<endl;
	char ch;
	int t;
	for (ch = 'A'; ch <= 'z'; ch++)
	{
	
			t = ch;

		cout << ch << " = " << t << '\t'<<'\t';
	}
	cout << endl;
	keep_window_open();
    return 0;
}

