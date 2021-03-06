// Algorithms and Datastructures.cpp: 3 different algorithms to find the maximum sum in an array of integers.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int cubic_mss1(int values[], int size);
int cubic_mss2(int values[], int size);
int cubic_mss3(int values[], int size);

int main() {
	int arr1[] = { 1, 2, -30, 4, 5 };
	int arr2[] = { 5, 80, 79, 13, 22, 23, 50 };
	int arr3[] = { -99 };
	int mss11 = cubic_mss1(arr1, 5);
	int mss12 = cubic_mss2(arr1, 5);
	int mss13 = cubic_mss3(arr1, 5);
	cout << "It should be printed 9." << endl;
	cout << mss11 << endl;
	cout << mss12 << endl;
	cout << mss13 << endl << endl;
	int mss21 = cubic_mss1(arr2, 7);
	int mss22 = cubic_mss2(arr2, 7);
	int mss23 = cubic_mss3(arr2, 7);
	cout << "It should be printed 272." << endl;
	cout << mss21 << endl;
	cout << mss22 << endl;
	cout << mss23 << endl << endl;
	int mss31 = cubic_mss1(arr3, 1);
	int mss32 = cubic_mss2(arr3, 1);
	int mss33 = cubic_mss3(arr3, 1);
	cout << "It should be printed 0." << endl;
	cout << mss31 << endl;
	cout << mss32 << endl;
	cout << mss33 << endl << endl;
	cout << "I hope it worked! :D" << endl;
	return 0;
}

int cubic_mss1(int values[], int size) {
	int maxSum = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			int thisSum = 0;
			for (int k = i; k <= j; k++) {
				thisSum = thisSum + values[k];
			}
			if (thisSum > maxSum) {
				maxSum = thisSum;
			}
		}
	}
	return maxSum;
}

int cubic_mss2(int values[], int size) {
	int maxSum = 0;
	for (int i = 0; i < size; i++) {
		int thisSum = 0;
		for (int j = i; j < size; j++) {
			thisSum = thisSum + values[j];
			if (thisSum > maxSum) {
				maxSum = thisSum;
			}
		}
	}
	return maxSum;
}

int cubic_mss3(int values[], int size) {
	int maxSum = 0, thisSum = 0;
	for (int i = 0; i < size; i++) {
		thisSum = thisSum + values[i];
		if (thisSum > maxSum) {
			maxSum = thisSum;
		}
		else if (thisSum < 0) {
			thisSum = 0;
		}
	}
	return maxSum;
}