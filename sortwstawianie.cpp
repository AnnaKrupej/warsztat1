//Sortowanie przez wstawianie
#include <iostream>
#include <cstdlib>
using namespace std;

void insertSort(int a[], int left, int right) {
	for(int i=left; i<right-left; i++) {
		for(int j=right; j>0; j--) {
			int t;
			if(a[j] < a[j-1]) {
				t = a[j];
				a[j] = a[j-1];
				a[j-1] = t;
			}
		}
	}
}

void printTable(int a[], int n) {
	for(int i=0; i<n; i++) {
		a[i];
		cout << a[i] << " ";
	}
	cout << endl << endl;
}

int main() {
	
	const int n = 8;
	int a[n] = {9, 1, 6, 8, 4, 3, 2, 0};
	printTable(a, n);
	
	insertSort(a, 0, n-1);
	printTable(a, n);
	
	return 0;
}

