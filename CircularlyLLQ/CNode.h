#pragma once
#include "stdafx.h"
#include "../../std_lib_facilities.h"
template<typename T>
class CNode {
public:
	CNode(T E, CNode<T>* N) {
		Element = E; next = N;
	}
	T Get_element() { 
		return Element;
	}
	CNode<T>* Get_next() {
		return next;
	}
private:
	T Element;
	CNode<T>* next;
};