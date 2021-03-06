// MergeSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
void print(int[], int);
void mergeSort(int[], int);
void mergeSort(int[], int, int, int);
void Mergesort(int[], int, int , int );
int main() {
	int arr[] = { 123,23,45,3,6,5,4,3,2,5,19 };
	int length = size(arr);
	print(arr, length);
	mergeSort(arr, length);
	print(arr, length);
	cout << size(arr) << endl;
	keep_window_open();
	return 0;

}

void mergeSort(int arr[], int length) {
	mergeSort(arr, length, 0,length- 1);
}

void mergeSort(int arr[], int length, int low, int high ) {
	if (low == high) return;
	int median = low + (high - low) / 2;
	mergeSort(arr, length, low, median);
	mergeSort(arr, length, median + 1, high);
	Mergesort(arr,low, median, high);
}
void Mergesort(int arr[], int low, int median, int high) {
	int newLenght = (high - low) + 1;
	int *arry = new int [newLenght];
	int i = low; int j = median + 1; int x = 0;
	while (i<=median&&j <=high)
	{
		if (arr[i] < arr[j]) {
			arry[x] = arr[i];
			i++;
			x++;
		}
		else {
			arry[x] = arr[j];
			j++; x++;
		}
	}
	while (i<=median)
	{
		arry[x] = arr[i];
		i++; x++;
	}while (j<=high)
	{
		arry[x] = arr[j];
		j++; x++;
	}
	for (int k = 0; k < newLenght; k++) {
		arr[low + k] = arry[k];
	}
	delete arry;
}
void print(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}
