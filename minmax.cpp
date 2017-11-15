#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int size=9;
	int tab[size]={2,5,1,9,10,11,0,6,3};
	

	int max=tab[0], min=tab[0];
		
		for(int j=1; j<size; j++){
			
			if(tab[j]>max) max=tab[j];
			
			else if(tab[j]<min) min=tab[j];
}
				cout << max << endl;
				cout << min << endl;
}
