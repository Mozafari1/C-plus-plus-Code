#pragma once
#include "stdafx.h"
#include "../../std_lib_facilities.h"

class Fraction {
public:
	Fraction();

	void set_teller(float t);
	void set_nevner(float n);
	bool operator<(const Fraction &);
	bool operator==(const Fraction &);
	bool operator>(const Fraction& );
	bool operator+=(Fraction&);
	//bool operator=(Fraction&  );
	bool operator <(int);
	float get_teller();
	float get_nevner();
private:
		float teller;
		float nevner;
};