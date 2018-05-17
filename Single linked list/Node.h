#pragma once
#include "link.h"
#include"stdafx.h"
#include "../../std_lib_facilities.h"
template<typename T> 
class Node {
private:
	T element;
	Node<T>*next;
public:
	Node(T, Node<T>*);
	T get_element();
	Node<T>*get_next();
};
template<typename T>
Node<T>::Node(T el, Node<T>* nxt) {
	element = el;
	next = nxt;
}
template<typename T>
T Node<T>::get_element() {
	return element;
}
template<typename T> 
Node<T>*Node<T>::get_next() {
	return next;
}
