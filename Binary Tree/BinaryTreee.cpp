#include "stdafx.h"
#include "BinaryTreee.h"
#include "../../std_lib_facilities.h"


BinaryTreee::BinaryTreee()
{
	Root = nullptr;
}


BinaryTreee::~BinaryTreee()
{
	Destroy(Root);
}

void BinaryTreee::Insert_Node(int v) {
	Root = Insert(Root, v);
}
Binary_Node* BinaryTreee::Insert(Binary_Node*n, int v) {
	if (n == nullptr)return new Binary_Node(v);
	if (v <= n->value) n->left = Insert(n->left, v);
	else n->right = Insert(n->right, v);
	return n;
}
Binary_Node*BinaryTreee:: Search_Node(int v) {
	return Search(Root, v);
}
Binary_Node* BinaryTreee::Search(Binary_Node*n, int v) {
	if (n == nullptr)return nullptr;
	if (v == n->value)return n;
	if (v <= n->value)return Search(n->left, v);
	return Search(n->right, v);
}
void BinaryTreee::Remove_Node(Binary_Node* remove)throw(TreeEmpty) {
	if (remove == nullptr) throw TreeEmpty("Empty Node");
	Root = Remove(Root, remove);
}
Binary_Node* BinaryTreee::Remove(Binary_Node*n, Binary_Node* remove)throw(TreeEmpty){
	if (n == nullptr) throw TreeEmpty("You Trying to remove node from an Empty Tree");
	if (n == remove) {
		if (n->left == nullptr) {
			Binary_Node*Temperary = n->right;
			delete n;
			return Temperary;
		}
		if (n->right == nullptr) {
			Binary_Node* Temperary = n->left;
			delete n;
			return Temperary;
		}
		Binary_Node* Minimum = Find_Minimum(n->right);
		n->value = Minimum->value;
		n->right = Remove(n->right, Minimum);
	}
	else if(remove->value<=n->value){
		n->left = Remove(n->left, remove);
	}
	else {
		n->right = Remove(n->right, remove);
	}
	return n;
}
Binary_Node* BinaryTreee::Find_Minimum(Binary_Node*n) {
	if (n->left = nullptr)return n;
	return Find_Minimum(n->left);

}
void BinaryTreee::Print_PostFix() {
	Print_PostFix(Root);
	cout << endl;

}
void BinaryTreee::Print_PostFix(Binary_Node* n) {
	if (n == nullptr)return;
	Print_PostFix(n->left);
	Print_PostFix(n->right);
	cout << n->value << '\t';
}
void BinaryTreee::Print_PreFix() {
	Print_PreFix(Root);
	cout << endl;

}
void BinaryTreee::Print_PreFix(Binary_Node* n) {

	if (n == nullptr)return;
	cout << n->value << '\t';
	Print_PostFix(n->left);
	Print_PostFix(n->right);
}
void BinaryTreee::Print_InFix() {
	Print_InFix(Root);
	cout << endl;

}
void BinaryTreee::Print_InFix(Binary_Node* n) {

	if (n == nullptr)return;
	Print_PostFix(n->left);
	cout << n->value << '\t';
	Print_PostFix(n->right);
}
void BinaryTreee::Destroy(Binary_Node*n) {
	if (n == nullptr) return;
	Destroy(n->left);
	Destroy(n->right);
	delete n;
}