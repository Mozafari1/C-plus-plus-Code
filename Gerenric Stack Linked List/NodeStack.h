#pragma once
#include "../../std_lib_facilities.h"
#include "stdafx.h"
#include "LinkedSTACK.h"
template<typename T>
class Node {
public:
	Node(T E, Node<T>* N) {
		Element = E; next = N;
	}
	T Get_element() {
		return Element;
	}
	Node<T>* Get_next() {
		return next;
	}
private:
	T Element;
	Node<T>* next;
};