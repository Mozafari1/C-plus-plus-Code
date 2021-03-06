// InsertionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

void print(int[] , int );  // This function prints out array of elements
//void file(int[], int);		// just to get random numbers
void insertionSort(int[], int);		// worse case of insertion Sort is O(n2) can uses when we have small elements to sorting or the element is almost sorted
// The Insertion sort algorithm take an Array and length 
int main()
{
	int arr[] = { 19,12,11,14,2,12,4,6 };
	int length = size(arr);
	//const int length = 100;  // the length of array 
	//int arr[length]; // an array of 100 places
	//file(arr, length); // calling random numbers
	print(arr, length); // printing out without sorting

	insertionSort(arr, length);// Calling Sorting algorithm
	print(arr, length); // Now printing out the sorted element
	keep_window_open(); 
    return 0;
}

void insertionSort(int arr[], int length) {  // takes to parameters an array and length
	for (int i = 0; i < length; i++) { // making a for loop and i is less then length
		int j = i; // j is equal to i
		while (j > 0 && arr[j] < arr[j - 1]) // maiking another loop. Now the j is greater than zero and array of j are less array of j minus one
		{
			swap(arr[j], arr[j - 1]); // swaping the elements. 
			j--; // j goes minus minus until it is done
		}
	}
}

void print(int arr[], int length) { // print function
	for (int i = 0; i < length; i++) { // less then length
		cout << arr[i] << '\t'; // printing out array of i elements
	}
	cout << endl;
}

/*
// random number 
void file(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 100;

	}
}
*/
