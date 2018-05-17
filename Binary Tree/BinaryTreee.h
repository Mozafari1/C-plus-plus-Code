#pragma once
#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include "ErrorHandle.h"
struct Binary_Node
{
	int value;
	Binary_Node* left;
	Binary_Node *right;
	Binary_Node(int val) : value(val), left(nullptr), right(nullptr){}
};
class BinaryTreee
{
public:
	BinaryTreee();
	~BinaryTreee();

	void Insert_Node(int);
	Binary_Node* Search_Node(int);
	void Remove_Node(Binary_Node*)throw (TreeEmpty);
	void Print_PostFix();
	void Print_PreFix();
	void Print_InFix();
private:
	Binary_Node * Root;
	Binary_Node * Insert(Binary_Node *, int);
	Binary_Node *Search(Binary_Node *, int);
	Binary_Node *Remove(Binary_Node *, Binary_Node *)throw(TreeEmpty);
	void Print_PostFix(Binary_Node *);
	void Print_PreFix(Binary_Node *);
	void Print_InFix(Binary_Node *);
	void Destroy(Binary_Node *);
	Binary_Node * Find_Minimum(Binary_Node *);

};

