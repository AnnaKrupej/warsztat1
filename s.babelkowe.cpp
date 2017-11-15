#include <iostream>
using namespace std;

int main(){
 	
	int size=8;
	int tab[size]={2,12,5,3,8,9,0,6};
    for( int i = 0; i < size; i++ )
    {
        for( int j = 0; j < size - 1; j++ )
        {
            if( tab[ j ] > tab[ j + 1 ] )
                 swap( tab[ j ], tab[ j + 1 ] );
            
        }
    }


	for(int i=0;i<8;i++)
		cout<<tab[i]<<' ';	
 	
 	
 	system("pause");
 	return 0;	
 }
