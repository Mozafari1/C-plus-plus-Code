// BinaryTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include"BinaryTreee.h"
int main()
{
	BinaryTreee MyTree;
	MyTree.Insert_Node(100);
	MyTree.Insert_Node(20);
	MyTree.Insert_Node(1000);
	MyTree.Insert_Node(2000);

	MyTree.Print_InFix();

	MyTree.Print_PostFix();
	MyTree.Print_PreFix();
	Binary_Node* b1 = MyTree.Search_Node(1000);
	if (b1 != nullptr) {
		cout << b1->value << endl;
		MyTree.Remove_Node(b1);
	}
	MyTree.Print_InFix();

	MyTree.Print_PostFix();
	MyTree.Print_PreFix();
	keep_window_open();
    return 0;
}

