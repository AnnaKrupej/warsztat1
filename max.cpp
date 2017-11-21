#include <iostream>
using namespace std;

int main(){

		int tab[4]={3,8,2,1};
		int max = tab[0];
		
	//	for(int i=0; i<10; i++)
			
		
		
			for(unsigned i = 1; i < 4; i++)
 				 if(tab[i] > max)
    			 max = tab[i];
     cout<<max;
 }
