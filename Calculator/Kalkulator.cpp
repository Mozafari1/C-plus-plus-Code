// Kalkulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include"../../std_lib_facilities.h"


class Token {

public:
	char kind;
	double value;
	string name;


	Token(char ch)
	{

		kind = ch;
		value = 0;
	}

	Token(char ch, double d)
	{
		kind = ch;
		value = d;

	}
	Token(char ch, string n) :kind{ ch }, name{ n } {}

};

class Token_stream {

public:
	Token_stream();
	Token get();
	void putback(Token);

	void ignore(char c);
private:
	Token buffer;
	bool full;

};

class Variable {

public:
	const double pi = 3.14;
	const double e = 2.75;
	string name;
	double value;
	Variable(string n, double v) : name(n), value(v) {}

};
//class Symbol_table {
//public:
//	double get(string s);
//	void set(string s, double d);
//	bool is_declared(string var);
//	double declare(string s, double val, bool var = true); //default is variable
//private:
//	vector<Variable> var_table;
//};
//double expression_v1();
double expression_v2();
double term();
double primary();
void calculate();
void clean_up_mess();
double statement();
double get_value(string n);
void set_value(string n, double d);
bool is_declared(string n);
double define_name(string n, double d);
void covertKmToM();
double declaration();
double factorial(double d);
void convert();
double ndigit();
void abc();
vector<Variable>var_table;

//Token get_token();
Token_stream ts;
const char number = '8';
const char print = ';';
const char quit = 'q';
const string prompt = "> ";
const string result = "= ";
const char name = 'a';
const char let = 'L';
const string declkey = "let";
void printMenu();

int main() {
	try {
		double val = 0;

		for (int i = 0; i < 120; i++) {
			cout << '*';

		}
		for (int i = 0; i < 48; i++) {
			cout << '*';

		}
		cout << " Welcome to our calculatur ";
		for (int i = 70; i < 116; i++) {
			cout << '*';

		}
		for (int i = 0; i < 119; i++) {
			cout << '*';

		}

		printMenu();
		int kan_ikke = -1;

		while (cin >> kan_ikke) {
			if (kan_ikke == 1) {
				calculate();
			}
			else if (kan_ikke == 2) {
				convert();
			}
			else if (kan_ikke == 3) {
				covertKmToM();
			}
			else if (kan_ikke == 4) {
				ndigit();
			}
			else if (kan_ikke == 5) {
				abc();
			}
		}


		for (int i = 0; i < 120; i++) {
			cout << '*';

		}
		for (int i = 0; i < 50; i++) {
			cout << '*';
		}
		cout << " type in q to quit ";

		for (int i = 70; i < 124; i++) {
			cout << '*';
		}
		for (int i = 0; i < 12; i++) {
			cout << '*';

		}
		cout << " enjoy it ";
		for (int i = 25; i < 95; i++) {
			cout << '*';

		}
		cout << " thank you ";
		for (int i = 106; i < 120; i++) {
			cout << '*';

		}


		define_name("pi", 3.1415926535);
		define_name("e", 2.7182828284);
		//	calculate();
		keep_window_open();
		return 0;
		/*	while (cin)
		{
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) {
		keep_window_open("1");
		return 0;
		}
		ts.putback(t);
		cout << result << expression_v2()<< endl;

		}*/

		/*double val = 0;

		/*	for (int column = 0; column < 24; ++column)
		{
		cout << "(*_*)";
		}
		cout << endl;
		for (int row = 0; row < 5; ++row)
		{
		cout << "//*\\";
		for (int column = 0; column < 112;++column)
		{
		cout << " ";
		}
		*/
		//	cout << "\\*//\n";
		/*}

		for (int column = 0; column < 24; ++column)
		{
		cout << "(*o*)";
		}
		cout << "\n";
		*/




		/*

		cout << "Welcome to our simple calculatur.\n"
		"Please enter expressions using floating-point numbers.\n"
		"This is a simple calculatur and you can use only 'plus, minus, divide and mulitiply'\n"
		"exemple how to use this calculatur \n"
		"1+2-4*4/2=\n"
		"or \n"
		"2\n" "+\n" "4\n" "=\n"
		"You have to type in '=' to print out the answer and if u don't do that so u can get error and not answer\n"
		"You can exit the the program to type in from 'q to x and 1' if u have typed in an unkown expressiion\n"
		"Happy calculating "

		<< endl;

		while (cin) {
		cout << ">";


		//		cout << expression_v2() << endl;
		Token t = ts.get();
		if (t.kind == 'q' || t.kind == 'r' || t.kind == 's' || t.kind == 't' || t.kind == 'u' || t.kind == 'v' || t.kind == 'w' || t.kind == 'x')break;
		if (t.kind == '=') cout << " = " << val << endl;
		else ts.putback(t);
		val = expression_v2();
		}



		keep_window_open();
		return 0;
		*/
	}

	catch (exception&e) {
		cerr << e.what() << endl;
		keep_window_open("~");
		return 1;
	}
	catch (...) {
		cerr << "Unknown expetion" << endl;
		keep_window_open("~~");
		return 2;
	}
	//double expression_v1() {
	//	double left = expression_v1();
	//	Token t = get_token();

	//	switch (t.kind) {

	//	case'+':
	//		return left + term();
	//		//break;

	//	case'-':
	//		return left - term();
	//		//break;

	//	default:
	//		return left;


	//	}

	//}
}

void printMenu() {




	cout << "¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤ C * h * o * o * s * e åå F * r * o * m åå M * e * n * u ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤" << endl;

	cout <<
		" \t(1) Go to calculate \t"
		" (2) Go to converting unit  \t"
		"\t(3) Go to converting fart \n"
		" \t(4) Go to digit form \t"
		" (5) Go to Quadratic formula " << endl;
	cout << prompt;

}

double get_value(string n) {
	for (int i = 0; i < var_table.size(); i++) {
		if (var_table[i].name == n) return var_table[i].value;
	}
	error("get: undefined variable ", n);
}
void set_value(string n, double d) {
	for (int i = 0; i < var_table.size(); i++) {
		if (var_table[i].name == n) {
			var_table[i].value = d;
			return;
		}
	}
	error("set: undefined variable ", n);
}



void calculate() {
	for (int i = 0; i < 120; i++) {
		cout << '*';

	}
	for (int i = 0; i < 48; i++) {
		cout << '*';

	}
	cout << " Welcome to our calculatur ";
	for (int i = 70; i < 116; i++) {
		cout << '*';

	}
	for (int i = 0; i < 119; i++) {
		cout << '*';

	}

	cout <<
		"*-*\t Please enter expressions using floating-point numbers.\n"
		"*+*\t This is a simple calculatur and you can use only 'plus, minus, divide and mulitiply'\n"
		"*-*\t Exemple how to use this calculatur \n"
		"*+*\t 1 \t +\t 2\t -\t 4\t *\t 4\t /\t 2\t =\n"
		"*-*\t \t \t \t \t \t or \n"
		"*+*\t 2\t" "+\t" "4\t" "=\n"
		"*-*\t You have to type in ' ; ' to print out the answer and if u don't do that so u can get error and not answer\n"
		"*+*\t You can exit the the program to type in q \n"
		"*-*\t \t \t \t \t \t \t \t \t \t \t \t Happy calculating "

		<< endl;
	for (int i = 0; i < 120; i++) {
		cout << '*';

	}
	for (int i = 0; i < 50; i++) {
		cout << '*';
	}
	cout << " type in q to quit ";

	for (int i = 70; i < 124; i++) {
		cout << '*';
	}
	for (int i = 0; i < 12; i++) {
		cout << '*';

	}
	cout << " enjoy it ";
	for (int i = 25; i < 95; i++) {
		cout << '*';

	}
	cout << " thank you ";
	for (int i = 106; i < 120; i++) {
		cout << '*';

	}
	while (cin) {
		try
		{

			cout << prompt;
			Token t = ts.get();
			while (t.kind == print) t = ts.get();
			if (t.kind == quit)
				return;
			ts.putback(t);
			cout << result << statement() << endl;
		}
		catch (exception &e) {
			cerr << e.what() << endl;
			clean_up_mess();
		}
	}
}
double statement() {
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return  declaration();
	default:
		ts.putback(t);
		return  expression_v2();
	}

}
double expression_v2() {

	double left = term();
	Token t = ts.get();

	while (true) {

		switch (t.kind) {
		case '+':
			left += term();
			t = ts.get();
			break;
		case '-':
			left -= term();
			t = ts.get();
			break;


		default:
			ts.putback(t);
			return left;

		}

	}


}


double declaration() {
	Token t = ts.get();
	if (t.kind != name) error("name expected in declaration");
	string var_name = t.name;
	Token t2 = ts.get();
	if (t2.kind != '=') error(" = messing in declaration of ", var_name);
	double d = expression_v2();
	define_name(var_name, d);
	return d;
}

double factorial(double d)
{
	int p = d;
	if (double(p) != d)
		error("ikke definert ");
	if (p < 0)
		error("ikke definert");
	else if (p > 31)
		error("større ");
	else if (p == 0)
		return 1;
	else {
		int res = p;
		for (int i = p - 1; i>0; --i)
			res *= i;
		return res;
	}
}



double term() {
	double left = primary();
	Token t = ts.get();
	while (true) {
		switch (t.kind) {

		case'%':
		{
			int i1 = narrow_cast<int>(left);
			int i2 = narrow_cast<int>(primary());
			if (i2 == 0) error("%: divide by zero");
			left = i1 % i2;
			t = ts.get();
			break;
		}


		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0)error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}

		default:
			ts.putback(t);
			return left;

		}
	}

}

double primary() {
	Token t = ts.get();
	double d = 0;
	switch (t.kind) {
	case '[': {
		d = expression_v2();
		t = ts.get();
		if (t.kind != ']') error(" ] expected ");
		break;
	}
	case '{':
	{
		d = expression_v2();
		t = ts.get();
		if (t.kind != '}')error("} expected ");
		break;	}
	case '(':
	{
		d = expression_v2();
		t = ts.get();
		if (t.kind != ')') error(") expected ");
		break;
	}

	case number:
		d = t.value;
		break;
	case '-':
		return-primary();
	case'+':
		return+primary();


	case name:
		return get_value(t.name);

	default:
		error("primary expected");
	}
	t = ts.get();
	if (t.kind != '!') {
		ts.putback(t);
		return d;
	}
	return factorial(d);


}

//Token get_token() {
//	char ch;
//	cin >> ch;
//	switch (ch) {
//	case '(': case')': case'+':case '-': case '*': case'/': 
//		return Token(ch);
//	case '.': case '0': case '1': case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
//	{
//		cin.putback(ch); // leser det første tallet og legger den føran den neste tallet som skal leses
//		double val;
//		cin >> val;
//		return Token('8', val);
//
//	}
//	}
//	
//}
void Token_stream::putback(Token t) {
	if (full)error("putback into full buffer");
	buffer = t;
	full = true;

}
Token_stream::Token_stream() : full(false), buffer(0) {}

Token Token_stream::get() {
	if (full) {
		full = false;
		return buffer;

	}
	char ch;
	cin >> ch;
	switch (ch) {
	case print: case quit://case 'r':case 's':case 't':case 'u':case 'v':case 'w':case 'x':

	case '{': case'}':case '(': case')': case'+':case '-': case '*': case'/':case '%':
	case '=': case '!': case '[': case']': case 'sqrt':
		return Token(ch);
	case '.': case '0': case '1': case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
	{
		cin.putback(ch); // leser det første tallet og legger den føran den neste tallet som skal leses
		double val;
		cin >> val;
		return Token(number, val);

	}
	default:
		if (isalpha(ch)) {
			//			cin.putback(ch);
			string s = "";
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) {
				s += ch;
			}
			cin.putback(ch);

			if (s == declkey) return Token(let);
			return Token(name, s);

		}
		error("Bad Token");
	}
}

void clean_up_mess()
{
	ts.ignore(print);
	/*
	while (true) {
	Token t = ts.get();
	if (t.kind == print) return;

	}*/
}
void Token_stream::ignore(char c) {
	if (full && buffer.kind == c) {
		full = false;
		return;
	}
	full = false;
	char ch;
	while (cin >> ch) {
		if (ch == c)
			return;
	}

}
bool is_declared(string n) {
	for (int i = 0; i < var_table.size(); i++) {
		if (var_table[i].name == n) return true;
	}
	return false;
}

double define_name(string n, double d) {
	if (is_declared(n)) error(n, " declared twice");
	var_table.push_back(Variable(n, d));
	return d;
}

void convert() {

	for (int i = 0; i < 120; i++) {
		cout << '¤';

	}
	for (int i = 0; i < 41; i++) {
		cout << '*';

	}
	cout << " Hello and welcome to convert calculate";
	for (int i = 70; i < 110; i++) {
		cout << '*';

	}
	for (int i = 0; i < 120; i++) {
		cout << '$';

	}
	double value;
	string unit = " ";
	cout << prompt;
	while (cin >> value >> unit) {
		cout << prompt;
		if (unit == "m") {

			cout << "> You type in " << value << " m" << "\n" << "and it's converted to "
				<< "\n" << result << value * 100 << " cm" << "\n" << result << value * 100 / 2.54 << " in" << "\n"
				<< result << value * 3.2808 << " ft" << endl;
		}

		else if (unit == "cm") {
			cout << prompt;

			cout << "> You type in " << value << " cm" << "\n" << "and it's converted to "
				<< "\n" << result << value / 100 << " m" << "\n" << result << value * 0.393701 << " in"
				<< "\n" << result << value * 0.032808 << " ft" << endl;
		}
		else if (unit == "in") {
			cout << prompt;

			cout << "> You type in " << value << " in" << "\n" << "and it's converted to "
				<< "\n" << result << value * 0.0254 << " m" << "\n" << result << value * 2.54 <<
				" cm" << "\n" << result << value * 0.083333 << " ft" << endl;
		}

		else if (unit == "ft") {
			cout << prompt;

			cout << "> You type in " << value << " ft" << "\n" << "and it's converted to "
				<< "\n" << result << value * 0.3048 << " m" << "\n" << result << value * 30.48 <<
				" cm" << "\n" << result << value * 12 << " in" << endl;

		}
		else if (unit != "ft" || unit != "m" || unit != "in" || unit != "cm") {
			cout << "Idiot that is not a unit" << endl;

		}
		cout << " Enter floating point numbers followed by uint(m, cm, ft, in) \n";

	}


}

void covertKmToM() {

	for (int i = 0; i < 120; i++) {
		cout << '¤';

	}
	for (int i = 0; i < 30; i++) {
		cout << '*';

	}
	cout << "  You are now to converting from km/h to m/s and opposite";
	for (int i = 60; i < 93; i++) {
		cout << '*';

	}
	for (int i = 0; i < 120; i++) {
		cout << '$';

	}

	const double c = 3.6;
	string Unit = " ";
	double num;
	cout << prompt;
	while (cin >> num >> Unit) {
		if (Unit == "km/h") {
			cout << "> du har tastet inn " << num << " km/h" << " og det blir " << num / c << " m/s" << endl;

		}
		else if (Unit == "m/s") {
			cout << "> du har tastet inn " << num << " m/s" << " og det blir " << num * c << " km/h" << endl;

		}
		else {
			cout << "> Idiot read the info below and \n";
		}
	}
}

// kap6 oppgave 9.cpp : Defines the entry point for the console application.
//


double ndigit() {

	for (int i = 0; i < 120; i++) {
		cout << '¤';

	}
	for (int i = 0; i < 46; i++) {
		cout << '*';

	}
	cout << " You are now using digit form ";
	for (int i = 70; i < 114; i++) {
		cout << '*';

	}
	for (int i = 0; i < 120; i++) {
		cout << 'å';

	}
	int i = 0;
	int digit;
	cout << prompt;
	for (int i = 0; i < 10; i++) {
		while (cin >> digit && digit != quit)
		{
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
			}

			else if (digit >= 10 && digit < 100) {
				int d = digit / 10;
				cin >> d;
				int dd = digit - d * 10;
				cin >> dd;

				cout << digit << " er " << d << "ti og " << dd << " en\n";

			}
		}
	}
}

void abc() {
	double a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
	for (int i = 0; i < 120; i++) {
		cout << '¤';

	}
	for (int i = 0; i < 45; i++) {
		cout << '*';

	}
	cout << " You are now using Quadratic formula ";
	for (int i = 70; i < 108; i++) {
		cout << '*';

	}
	for (int i = 0; i < 120; i++) {
		cout << '$';

	}
	while (true) {

		cout << prompt;
		cin >> a >> b >> c;
		discriminant = b * b - 4 * a*c;

		if (discriminant > 0) {
			x1 = (-b + sqrt(discriminant)) / (2 * a);
			x2 = (-b - sqrt(discriminant)) / (2 * a);
			cout << "Roots are real an different: " << endl;
			cout << "> x1 = " << x1 << endl;
			cout << "> x2 = " << x2 << endl;
		}
		else if (discriminant == 0) {
			cout << "Roots are real and differents: " << endl;
			x1 = (-b + sqrt(discriminant)) / (2 * a);
			cout << "> x1 = " << x1 << endl;
			cout << "> x2 = " << x1 << endl;
		}
		else {
			realPart = -b / (2 * a);
			imaginaryPart = sqrt(-discriminant) / (2 * a);
			cout << "Root are complex and differents: " << endl;
			cout << "> x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
			cout << "> x2 = " << realPart << "-" << imaginaryPart << "i" << endl;


		}
	}
}