#pragma once
#include "../../std_lib_facilities.h"
#include "stdafx.h"
#include "NodeStack.h"
#include"RunTimeException.h"
template<typename T>
class LinkedList {
public:
	LinkedList() {
		Header = NULL;
	}
	~LinkedList(){
		if (!isEmpty())
			Remove_element();
	}
	void Add_element(const T& E) {
		Node<T>* NewNode = new Node<T>(E, Header);
		Header = NewNode;

	}
	void Remove_element()throw (ListEmpty) {
		if (isEmpty()) throw ListEmpty("Empty List");
		Node<T>* OldNode = Header;
		Header = OldNode->Get_next();
		delete OldNode;
	}
	T Front_Element()throw (ListEmpty) {
		if (isEmpty()) throw ListEmpty("Empty Front");
		return Header->Get_element();
	}
	bool isEmpty() {
		return Header == NULL;
	}
private:
	Node<T>* Header;
};
