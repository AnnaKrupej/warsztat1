#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int size=9;
	int tab[size];
	
	

	srand(time(0));
	for(int i=0;i<size;i++)
	{
		tab[i]=(rand()%100);
		
	}
	int max=tab[0];
	for(int j=1;j<size;j++){

	if(tab[j]>max)
	max=tab[j];
}
	
	cout<<max<<endl;
	
	
	
	
	
	
	
	
}
