#include <iostream>
using namespace std;

int main(){
 	bool a;
	int size=8;
	int tab[size]={2,12,5,3,8,9,0,6};
	
	
	
    	for( int i = 0; i < size; i++ )
   	 	{
   	 	 
      	  for( int j = 0; j < size - 1; j++ )
      	  {
      	     if(a==true)break;
				if( tab[ j ] > tab[ j + 1 ] ){
      	           swap( tab[ j ], tab[ j + 1 ] );
      	           for(int k=0;k<8;k++)
					{
      	           if(tab[k]<tab[k+1])true;
      	           else false;
      	           if(a==false)break;
      	           	}
      	           }
      	           
      	  }
   	 	}
   	 

	for(int i=0;i<8;i++)
		cout<<tab[i]<<' ';	
 	
 	
 	system("pause");
 	return 0;	
 }
