#pragma once
#include"stdafx.h"
#include "../../std_lib_facilities.h"
class RuntimeExecption {
public:
	RuntimeExecption(const string& err) {
		ErrorMsg = err;

	}
	string GetMessage() const { return ErrorMsg; }
private:
	string ErrorMsg;
};
class TreeEmpty : RuntimeExecption {
public:
	TreeEmpty(const string& err):RuntimeExecption(err){}
};