#pragma once
#include"stdafx.h"
#include"../../std_lib_facilities.h"
#include"Exception.h"
template<typename T>
class DNode {
public:
	DNode(T elem) {
		Element =elem;
		prev = nullptr;
		next = nullptr;
	}
	T Element;
	DNode<T>* prev;
	DNode<T>* next;
};
