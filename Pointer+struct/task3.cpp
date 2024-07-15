#include <iostream>
using namespace std;

int main(){
	
	int a,b;
	int *ptrA,*ptrB;
	
	cout<<"Enter value of A: ";
	cin>>a;
	cout<<"Enter value of B: ";
	cin>>b;
	
	
	
	ptrA=&a;
	ptrB=&b;
	
	cout<<"A: "<<*ptrA<<endl;
	cout<<"B: "<<*ptrB;
	
	
}
