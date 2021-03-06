// QuickSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"../../std_lib_facilities.h"
/*
void MainFuncCall(int[], int);
void printOutElement(int[], int);
void QuickSortFindPivot(int[], int, int);
int QuickSortElement(int[], int, int);
void fileOfArray(int[], int);
*/

void printing(int[], int);
void randomnumber(int[], int);
void FunctionCall(int[], int);
void QuickSortElement(int[], int, int);
int ParittionELement(int[], int, int);

int main()
{
	const int length = 10000;
	int arr[length];
	randomnumber(arr, length);
	//printing(arr, length);
	FunctionCall(arr, length - 1);
	clock_t start = clock();
	printing(arr, length);
	clock_t stop = clock();
	double time = (double)(stop-start) / CLOCKS_PER_SEC * 1000.0;
	cout << "Time: " << time << endl;
	/*
	int arra[] = { 13,2,567,3,234,657,234,56,67,8,455,34,2,234 };
	int lengthOfArray = size(arra);
	const int leng = 1000;
	int arr[leng];
	fileOfArray(arr, leng);
	cout << "This is UNSORTED ARRAY" << endl;
	printOutElement(arra, leng);

	printOutElement(arra, lengthOfArray);
	cout << "This is SORTED array" << endl;
	MainFuncCall(arra, lengthOfArray - 1);
	MainFuncCall(arr, leng-1);
	printOutElement(arr, leng);
	printOutElement(arra, lengthOfArray);
	*/
	keep_window_open();
	return 0;
}
/*
void swap(int *a, int *b)
{
	int temp = *a; 
	*a = *b;
	*b = temp;
}
void MainFuncCall(int arr[], int length) {
	QuickSortFindPivot(arr, 0, length);
}
void QuickSortFindPivot(int arr[], int minimum, int maximum) {
	if (minimum < maximum) {
		int pivot = QuickSortElement(arr, minimum, maximum);
		QuickSortFindPivot(arr, minimum, pivot - 1);
		QuickSortFindPivot(arr, pivot + 1, maximum);
	}
}
int QuickSortElement(int arr[], int minimum, int maximum) {
	int newLength = arr[maximum];
	int i = (minimum - 1);
	for (int j = minimum; j <= maximum - 1; j++) {
		if (arr[j] < newLength) {
			i++;
			swap(&arr[i], &arr[j]);
		}

	}
	swap(&arr[i + 1], &arr[maximum]);
	return i + 1;
}

void printOutElement(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void fileOfArray(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 100;
	}
}
*/

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void FunctionCall(int arr[], int length) {
	QuickSortElement(arr, 0, length);
}
void QuickSortElement(int arr[], int minimum, int maximum) {
	if (minimum < maximum) {
		int pivot = ParittionELement(arr, minimum, maximum);
		QuickSortElement(arr, minimum, pivot - 1);
		QuickSortElement(arr, pivot + 1, maximum);
	}
}

int ParittionELement(int arr[], int minimum, int maximum) {
	int newLength = arr[maximum];
	int i = (minimum - 1);
	for (int j = minimum; j <= maximum - 1; j++) {
		if (arr[j] < newLength) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[maximum]);
	return i + 1;
}
void printing(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void randomnumber(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 1000;
	}
}