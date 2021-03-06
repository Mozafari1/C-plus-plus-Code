// SelectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
void out(int[], int);
void file(int[], int);
void print(int[], int); // declaring print function with two parameter in side 
void selectionSort(int[], int); // declaration of selcetion Sort with an empty array and length of array Worse case is O(n2)
int main()
{
	//int arr[] = { 12,34,45,21,4,56,23,7,3 }; // making an array
	//int length = size(arr); // length is eqaul to size of array
	const int length = 25;
	int arr[length];
	file(arr, length);
	cout << "Unsorted elements:" << endl;

	out(arr, length);

	print(arr, length);// printing out with out sorting
	selectionSort(arr, length); // calling the selection sort

	cout << "Sorted elements" << endl;
	print(arr, length); // printing out sorted elements
	out(arr, length);

	cout << "The size of array: "<<size(arr) << endl;

	keep_window_open();
    return 0;
}
void print(int arr[], int length) {// defenition of print function with and empty array and lenght of size of array
	cout << "This is normal print" << endl;
	for (int i = 0; i < length; i++) { // a for loop and i is eqaul to zero when the loop starts, i is less then the lenght of size of array and i goes pluss pluss as long as the array is continuing
		cout << arr[i] << '\t';  // printing out array of i elements
	}
	cout << endl;
}

void out(int arr[], int length) {
	cout << "This is Triangle" << endl;
	for (int i = 0; i <length; i++) {
		if (length > 25) {
			cout << "The length was too long. Try agin: Max length is 25" << endl;
			break;
		}
		for (int j = length - 1; j > 0; j--) {}
			cout << " ";
		for (int k = 0; k < 1 *i+ 1; k++)
			cout << arr[i]<<" ";
		cout << endl;
	}
}

void file(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 100;
	}
}

void selectionSort(int arr[], int length) {	// defenition of seletionsort
	for (int i = 0; i < length; i++) { // for loop
		int minimum = i;// minvalue = i
		for (int j = i+1; j < length; j++) {// Here we have another for loop with j = i+1
			if (arr[j] < arr[minimum]) minimum = j; // If array of j are less then  array of minimum so the minimum get the value of j
		}
		// swaping array of minimum with array of i
		swap(arr[minimum], arr[i]);

	}
}
