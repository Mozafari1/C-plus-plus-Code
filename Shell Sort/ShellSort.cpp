// ShellSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"../../std_lib_facilities.h"
// Declaretion of functions
void fil(int[], int);
void print(int[], int); // 
//void shellsort(int[], int);
void ShellSort(int[], int, int);
void ShellSortMain(int[], int);

int main()
{
	int arr[] = { 23,34,5,5,4,3,98,43,345,67,3,7 };
	int length = size(arr);
	//const int length= 100;
	//int arr[length];
	fil(arr, length);
	cout << "Unsorted array" << endl;
	print(arr, length);
	ShellSortMain(arr, length);
	cout << "Sorted array" << endl;
	print(arr, length);
	keep_window_open();
    return 0;
}

// Defenitions of functions
// Takes two parameter and we  calling the ShellSort function inside this function is that we say where sorting starts
/*
void shellsort(int arr[], int length) {
	ShellSort(arr, length, 1); 

}
*/
// Here we define the ShellSort function and it takes three parameter
void ShellSort(int arr[], int length, int gap) {
	for (int i = gap; i < length; i++) {// making a for loop where i is equal to gap when it runns and less then length
		int j = i; // j = get i value
		while (j >= gap && arr[j]<arr[j - gap]) // A while loop. when loop runns J is greater or equal to gap and array of size j is less then array of size j -gap
		{
			swap(arr[j], arr[j - gap]); // swaping the element array of j with j-gap
			j = j - gap; // j is now equal to j-gap

		}

	}
}
// define function and this func is called in main
void ShellSortMain(int arr[], int length) {
	int gap = length / 2;// maiking gap 
	while (gap>0) // gap greater then sezo
	{
		ShellSort(arr, length, gap); // calling the ShellSort
		gap = gap / 2; // now gap is divided by 2
	}
}

void fil(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 100;
	}
}
void print(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}