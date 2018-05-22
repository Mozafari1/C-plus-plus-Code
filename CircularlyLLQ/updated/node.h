#pragma once
#include "stdafx.h"
#include"../../std_lib_facilities.h"
#include"Clist.h"
template <typename T>
class Cnode {
public:
	Cnode(T el) {
		Element = el;
		next = nullptr;
	}
	T Element;
	Cnode<T>* next;
};
