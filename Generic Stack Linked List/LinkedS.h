#pragma once
#include"../../std_lib_facilities.h"
#include"LinkedSTACK.h"
#include "stdafx.h"
#include "RunTimeException.h"
template<typename W>
class LinkedStack {
public:
	LinkedStack() :S(), n(0){
	}
	int GetSize() {
		return n;
	}
	bool empty() {
		return n == 0;
	}
	W pop() throw(StackEmpty) {
		if (empty())throw StackEmpty("Pop from empty stack");
		--n;
		S.Remove_element;
	}
	W Top()throw (StackEmpty) {
		if (empty())throw StackEmpty("Top empty from stack");
		return S.Front_Element();
	}
	void Push(const W& E) {
		++n;
		S.Add_element(E);
	}
private:
	LinkedList<W> S;
	int n;
};