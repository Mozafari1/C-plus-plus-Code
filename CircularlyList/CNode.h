#pragma once
#include "stdafx.h"
#include "../../std_lib_facilities.h"
template<typename T> 
class CNode {
public:
	CNode(T, CNode<T>*);
	T get_element();
	CNode<T>* get_next();
private:
	T element;
	CNode<T>* next;
};
template<typename T>
CNode<T>::CNode(T el, CNode<T>*n) {
	element = el;
	next = n;
}
template<typename T>

T CNode<T>::get_element() {
	return element;
}
template<typename T>
CNode<T>*CNode<T>::get_next() {
	return next;
}