// EndedQueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

struct Node {
	int data; Node* next;
};
class q {
public:
	void enqueue(int x) {
		Node* newNode = new Node();
		newNode->data = x;
		newNode->next = NULL;
		if (front == NULL) {
			front = newNode;
			back = newNode;
		}
		else {
			back->next = newNode;
			back = newNode;
		}
	}
	void dequeue() {
		if (empty()) {
			cout << " empty Q" << endl;
		}
		else if (front == back) {
			free(front);
			front = back = NULL;
		}
		else {
			Node* newNode = front;
			front = front->next;
			free(newNode);
		}
	}
	bool empty() {

		if (front == NULL) {
			return true;
		}
		else {
			return false;
		}
	}
	void showfront() {
		if (empty()) {
			cout << "empty front" << endl;
		}
		else {
			cout << "Display FRONT: " << front->data << endl;
		}
	}
	void showAll() {
		if (empty()) {
			cout << "empty" << endl;
		}
		else {
			Node* newNode = front;
			while (newNode != NULL) {
				cout << "Display SHOW: " << newNode->data << endl;
				newNode = newNode->next;
			}

		}
	}
private:
	Node * front = NULL;
	Node* back = NULL;

};

int main()
{

	q k;
	k.enqueue(2);
	k.enqueue(3);
	k.enqueue(4);
	k.enqueue(5);
	k.showAll();
	k.dequeue();
	k.dequeue();
	k.dequeue();
	k.showfront();
	k.enqueue(6);
	k.dequeue();
	k.showfront();
	k.showAll();
	keep_window_open();
    return 0;
}

