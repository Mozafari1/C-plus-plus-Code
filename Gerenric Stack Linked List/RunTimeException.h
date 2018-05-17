#pragma once
#include "stdafx.h"
#include"../../std_lib_facilities.h"
class RunTimeException {
public:
	RunTimeException(const string& err) { errorMsg = err; }
	string getMessage() { return errorMsg; }
private:
	string errorMsg;
};
class ListEmpty:RunTimeException {
public:
	ListEmpty(const string &err): RunTimeException(err){}
};
class StackEmpty:RunTimeException {
public:
	StackEmpty(const string &err): RunTimeException(err){}
};