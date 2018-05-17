#pragma once
#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include "CNode.h"
template<typename T>
class CircularlyCursor {
public:

	CircularlyCursor() {
		Cursor = NULL;
	}
	~CircularlyCursor() {
		while (!Empty())
		{
			Remove_element();
		}
	}
	void Add_Element(const T& E) {
		CNode<T>* NewCNODE = new CNode<T>(E, Cursor);
		Cursor = NewCNODE;
	}
	void AdvanceCursor() {
		Cursor = Cursor->Get_next();
	}
	void Remove_element() {
		CNode<T>* oldCNODE = Cursor;
		Cursor = oldCNODE->Get_next();
		delete oldCNODE;
	}
	T Front_Element(){
		return Cursor->Get_next()->Get_element();
	}
	T Back_Element(){
		return Cursor->Get_element();
	}
	bool Empty() {
		return Cursor->Get_next()->Get_element();
	}
private:
	CNode<T>* Cursor;
};