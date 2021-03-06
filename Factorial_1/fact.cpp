// fact.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
int factorial(int n);

int main()
{
	int n;

	cout << "Enter a positive integer: ";
	cin >> n;

	cout << "Factorial of " << n << " = " << factorial(n)<<endl;
	keep_window_open();
	return 0;
}

int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}
