// oppgaUnitVectorer_C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

int main()

try {/* Find the sum, product etc
	cout << "enter two integer " << endl;
	int x; int y;
	while (cin >> x >> y) {
		cout << "sum : "<<x + y << endl;
		cout << "produkt: " << x * y << endl;
		if (x < y) {
			cout << "ss =x : " << x << endl;
			cout << "ll = y : " << y << endl;
			cout << "diff:: " <<y-x  << endl;
			cout << "rratio: " << y << " : " << x << endl;
		}
		else {
			cout << "s = y: " << y << endl;
			cout << "l = x : " << x << endl;
			cout << "diff: " << x - y << endl;
			cout << "ratio: " << x << " : " << y << endl;

		}
	}
	*/

	//  How to find the smaller and the equal of three integers

	cout << "Enter three strings: " << endl;
	//int a, b, c;
	string a,b, c;
	while (cin >>a>>b>>c)
	{
		if (a <= b && b <= c ) {


			cout << "abc: " << a << ", " << b << ", " << c << endl;
		}

		else if (a <= c && c < b) {
				cout << "acb: " << a<<", "<<c << "," << b << endl;
			}

		else if (b < a && a <= c) {

			cout <<"bac: "<< b << ", " << a << ", " << c << endl;

		}

		else if (c <b && b<=a) {

			cout <<"cba: " << c << ", " << b << ", " << a << endl;

			}
		else if (c < a && a < b) {
			cout << "cab: " << c << ", " <<  a<< ", " << b << endl;

		}
		else if (b <= c && c < a) {
			cout << "bca: " << b << ", " << c << ", " << a << endl;

		}

	}

	// the coins 
	//cout << "Enter some coins: " << endl;

	//double pen, nick, dim, qua, half, dol;


	cout << "Enter The Units of coins: " << endl;
	int coin = 0;

	string  unit = " ";
	int pen = 0; int nick = 0; int dim = 0; int qua = 0; int hd = 0;
	int p = 0; int n = 0; int d= 0; int q = 0; int h = 0;

	while (coin!=-1 )
	{
		cin >> coin >> unit;
		if (unit == "penny") {
			pen = coin;
			p = pen * 1;
		}
		else if (unit == "nickle") {
		nick = coin;
		n = nick * 5;
		}
		else if (unit == "dime") {
		dim = coin;
		d = dim * 10;

		}
		else if (unit == "quarter") {
		 qua = coin;
		 q = qua * 20;

		}
		else  if (unit == "half") {
		 hd = coin;
		 h = hd * 50;
		}

//	cout << "Enter some coins to and units" << endl;
	}
	cout << "You have " << pen << " pennies" << endl;
	cout << "You have " << nick << " nickles" << endl;
	cout << "You have " << dim << " dimes" << endl;
	cout << "You have " << qua << " quarters" << endl;
	cout << "You have " << hd << " half dollar" << endl;
	cout << "You have toltal : " << p + n + d + q + h << endl;
	

// How to print out the greater, less and, equal and almost equal
		cout << "enter some integers: " << endl;
		double a = 0;
		double x = 0;
		while (cin>> a>>x)
		{
			if (a != '|' && x != '|') {
				if (a - x <(1.0 / 100)) {
				cout << "The input are almost equal: " << a << " ~= " << x << endl;
			}
				if (a < x) {
					cout << "The smaller value is followed by: " << a << '\n';
					cout << "The larger value is followed by: " << x << '\n';

				}
				else if (a == x) {
					cout << "The input are equal: " << x << endl;
				}

				else if(x<a){
					cout << "The larger value is followed by:  " << a<< '\n';
				cout << "The smaller value is followed by: " << x<< '\n';

				}

				cout << "enter some integers and you can exit to enter '|'" << endl;
			}
		}
		
		//		C++		Read a double and each time around. Write out the smaller so far and the larger så far after the input
		cout << "enter a double:" << endl;
		double a = 0;
		double b = 0;
		while (a !=-1)
		{
			cin >> a;
			cout <<"You have entered: "<< a << endl;
			if (a <b) {
				double i = a; a = b; b = i; cout << "The smallest so far: "<<b << endl;
			}
			else {
				double l = a; a = b; b = l;
				cout <<"The largest so far: "<< b<< endl;
			}

		}

		// Add a unit to each double entered
		
		cout << "Enter some value and units take 4 units (cm, m,ft,in)" << endl;
		double value = 0;
		string unit = " ";
		double cm = 100; double in = 2.54; double ft = 12;
		double smlg = 0.00;
		vector<double> UnitVector;
		double TheSum = 0;
		while (cin >> value >> unit)
		{
			cout << "--------------------------" << endl;

			cout << "You have entered: " << value << " " << unit << endl;
			cout << "--------------------------" << endl;

			if (unit == "m") {
				cout << "Converted from meter to: " << endl;
				cout << "-*------***-------*-" << endl;

				UnitVector.push_back(value);
				TheSum += value;
				cout <<"> "<< value << " m" << '\n'
					<< "> " << value * cm << " cm" << '\n'
					<< "> " << value * cm/in << " in" << '\n'
					<< "> " << value *cm/(ft*in)<< " ft" << endl;
			}
			else if (unit == "cm") {
				cout << "Converted from centimeter to: " << endl;
				cout << "-*------***-------*-" << endl;

				UnitVector.push_back(value/cm);
				TheSum += (value / cm);
				cout << "> " << value << " cm" << '\n'
					<< "> " << value / cm << " m" << '\n'
					<< "> " << value / in << " in" << '\n'
					<< "> " << value / (ft*in) << " ft" << endl;

			}
			else if (unit == "in") {
				cout << "Converted from inches to: " << endl;
				cout << "-*------***-------*-" << endl;

				UnitVector.push_back(value * in / cm);
				TheSum += (value * in / cm);
				cout << "> " << value << " in" << '\n'
					<< "> " << value * in / cm << " m" << '\n'
					<< "> " << value * in << " cm" << '\n'
					<< "> " << value / ft << " ft" << endl;

			}
			else if (unit == "ft") {
				cout << "Converted from feet/food to: " << endl;
				cout << "-*------***-------*-" << endl;

				UnitVector.push_back(value * ft*in / cm);
				TheSum += (value * ft*in / cm);
				cout << "> " << value << " ft" << '\n'
					<< "> " << value * ft*in / cm << " m" << '\n'
					<< "> " << value * in*ft << " cm" << '\n'
					<< "> " << value * ft << " in" << endl;


			}
			else {
				cout << "-*--Error--*UNIT*---Error---*-" << endl;

				cout << "No match ...... try agin...." << endl;
			}
			if (value <smlg) {
				double t = value;
				value = smlg;
				smlg = t;
				cout << "-*------Smallest-------*-" << endl;

				cout << "This is the smallest so far: " << endl;
				cout << "> " << smlg << endl;
			}
			else {
				double t = value;
				value = smlg;
				smlg = t;
				cout << "-*------Largest-------*-" << endl;

				cout << "This is the largest so far: " << endl;
				cout << "> " << smlg << endl;
			}
			cout << "--------------------------" << endl;

			cout << "The Sum is on meter: " << TheSum << endl;
			cout << "--------------------------" << endl;

			cout << "Here is the list over what you have entered: " << endl;
			cout << "--------------------------" << endl;
			for (auto const &veclist : UnitVector) { cout << "This value is converted to meter: > " << veclist << endl; }
			cout << "--------------------------" << endl;
			cout << "Enter some number to conUnitVectorert: You can type q to quit: " << endl;
			UnitVector.clear();
		}
		
		//	Find all primes under 100;
		
		vector<int> prime;
		int ran = randint(2, 100);
		prime.push_back(2);
		for (int i = 3; i <= ran; i++) {
			bool pr = true;
			for (int j = 0; j < prime.size() && prime[j] * prime[j] <= i; j++) {
				if (i % prime[j] == 0) {
					pr = false;
					break;
				}

			}if (pr) {
				prime.push_back(i);
				cout << i << '\t';

			}
		}

		cout << endl;
		

				//		Fibonacci Series
			int t1 = 0, t2 = 1, nextTerm = 0;
				for (int i = 1; i <= 10; i++) {
					cout << "Fibonacci Series: ";

					if (i == 1) {
					}
					else if (i == 2) {
						cout << t2 << endl;
						cout << "Fibonacci Series: ";
					}
					nextTerm = t1 + t2;
					t1 = t2;
					t2 = nextTerm;
					cout << t2 << endl;
				}
				

				// How to print out the Fibonacci Series
					
					double i = 1, first = 0, second = 1,N_series =0, length = 100;
					cout << "Name			" << "i value  " << "Series Number" << endl;
					while (i<length)
					{
						cout << "Fibonacci Series Number" <<'\t' << " | " << i <<" | "<<'\t';

						if (i == second) {
							// do nothing
						}
						else if (i == 2) {
							cout << second << endl;
							cout << "Fibonacci Series Number" << '\t' << " | " << i << " | " << '\t';
						}
						N_series =  first+second;
						first = second;
						second = N_series;
						cout << second << endl;
						i++;

					}

}
catch (exception& e)
{
	cerr << "Error: " << e.what() << endl;
	keep_window_open();
	return 0;
}
catch (...) {
	cerr << "Unkown Error " << endl;
	keep_window_open();
	return 0;
}
