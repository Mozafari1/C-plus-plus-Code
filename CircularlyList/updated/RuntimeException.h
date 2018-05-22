#pragma once
#include"node.h"
class RuntimeException {
public:
	RuntimeException(const string & err) { errorMSG = err; }
	string errorMeassge() const { return errorMSG; }
private:
	string errorMSG;
};

class EmptyQueue: public RuntimeException{
public:
	EmptyQueue(const string& err): RuntimeException(err){}
};