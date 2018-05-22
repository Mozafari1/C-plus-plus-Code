#pragma once
#include"stdafx.h"
#include"../../std_lib_facilities.h"

class RuntimeException {
private:
	string errorMSG;
public:
	RuntimeException(const string& err) { errorMSG = err; }
	string getMSG()const { return errorMSG; }
};

class EmptyDList:public RuntimeException {
public:
	EmptyDList(const string & err):RuntimeException(err){}
};