#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int size=9;
	int t[size]={3,5,7,2,65,33,1,9,12};
	int schowek;
	int zamiana=0;
	do
{
	int zamiana=0;
		for (int i=0; i<9; i++){
		
		if (t[i]>t[i+1]){
		
			zamiana=zamiana+1; 
			schowek=t[i];
			t[i]=t[i+1];
			t[i+1]=schowek;
		}
	}
}
				
		while(zamiana!=0);
		for (int j=0; j<=5; j++)
{
		cout<<t[j]<<" ";
	}		
				return 0;
}
	
	

	
	
	
	
	
	
	
	
	

