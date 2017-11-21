//Sortowanie z wybieraniem
#include <iostream>
using namespace std;

void selectSortStable(int a[], int left, int right) {
	int min_i, t;
	for(int i=left; i<right; i++) {
		min_i = i; //indeks elementu najmniejszego
		for(int j=i+1; j<=right; j++) {
			if(a[j]<a[min_i]) {
				min_i = j;
			}
		}
		t = a[min_i];
		for(int j=min_i; j>i; j--) {
			a[j] = a[j-1];
		}
		a[i] = t;
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
	printTable(a, n);
	
	selectSortStable(a, 0, n-1);
	printTable(a, n);
	
	return 0;
}
