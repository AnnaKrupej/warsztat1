//Algorytm Euklidesa

#include <iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cout<<"Podaj a: ";
	cin>>a;
	cout<<"Podaj b: ";
	cin>>b;
	
	cout<<"NKWD("<<a<<","<<b<<")= ";
	
	while(a!=b){
		if(a<b)
			b-=a;
			else
				a-=b;

	}
	cout<<a;
	return 0;
}
