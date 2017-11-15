#include <iostream>
using namespace std;

int main(){
 	int k;
	int size=8;
	int tab[size]={2,12,5,3,8,9,0,6};
    for( int i = 0; i < size; i++ )
    {
        k = i;
        for( int j = i + 1; j < size; j++ )
        if( tab[ j ] < tab[ k ] )
             k = j;
        
        swap( tab[ k ], tab[ i ] );
    }
	for(int i=0;i<8;i++)
		cout<<tab[i]<<' ';	
 	
 	
 	system("pause");
 	return 0;	
 }
