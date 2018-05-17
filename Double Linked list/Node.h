#pragma once
#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include "dLinked.h"


template<typename T>
class DoubleNode {			// making a class 
public:
	DoubleNode(T, DoubleNode<T>*, DoubleNode<T>*); // maiking a constructor with three parameters
	T get_element()const; // get the element value
	DoubleNode<T>*get_next()const; // pointer to get next value
	DoubleNode<T>*get_prev()const; // get previous value with pointer
private:

	DoubleNode<T>* prev; // previous / next and element
	DoubleNode <T>* next;
	T element;

};
template<typename T>
DoubleNode<T>::DoubleNode(T el, DoubleNode<T>* pr, DoubleNode<T>*nx) { // calling constructor 
	element = el;
	prev = pr;
	next = nx;
}
template<typename T>
T DoubleNode<T>::get_element()const { // returning the element value
	return element;
}
template<typename T>
DoubleNode<T>* DoubleNode<T>::get_next()const { // return the next value
	return next;
}
template<typename T>
DoubleNode<T>* DoubleNode<T>::get_prev()const { // return the previous
	return prev;
}
