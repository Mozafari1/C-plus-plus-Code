#pragma once
#include "stdafx.h"
#include "../../std_lib_facilities.h"
class ErrorHandleException {
private:
	string ErrorMsg;
public:
	ErrorHandleException(const string& err) { ErrorMsg = err; }
	string GetMessage() const { return ErrorMsg; }
};

class QueueEmpty : public ErrorHandleException {
public:
	QueueEmpty(const string & err): ErrorHandleException(err){}
};