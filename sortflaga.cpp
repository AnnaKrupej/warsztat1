//Babelkowe z flaga
#include <iostream>
using namespace std;

void bubbleSort(int a[], int left, int right) {
	int i, j, t;
	cout << "bubbleSort" << endl;
	for(i=left; i<right; i++) {
		cout << "i = " << i << endl;
		for(j=left; j<right; j++) {
			if(a[j]>a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}

void bubbleSortFlag(int a[], int left, int right) {
	int i, j, t;
	cout << "bubbleSort" << endl;
	for(i=left; i<right; i++) {
		cout << "i = " << i << endl;
		bool isSorted = true; //czy w tym momencie jest posortowana
		for(j=left; j<right; j++) { 
			if(a[j]>a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				isSorted = false;
			}
		}
		if(isSorted) //czyli nie weszlo do if w petli wewnetrznej
			break;
	}
}

void printTable(int a[], int n) {
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	cout << endl << endl;
}

int main() {
	
	const int n = 8;
	int a[n] = {9, 1, 6, 8, 4, 3, 2, 0};
	//int a[n] = {1,2,3,4,6,5,7,8};
	printTable(a, n);
	
	
	//Sortowanie babelkowe
	//bubbleSort(a, 0, n-1);
	//Sortowanie babelkowe z flaga
	bubbleSortFlag(a, 0, n-1);
	printTable(a, n);
	
	return 0;
}
