#include <iostream>
using namespace std;

int func1(int first, int second,int third,int fourth){
	int result;
	result = (first*fourth)+(second*third);
	return result;
}

int func2(int fourth, int third){
	int result=third*fourth;
	return result;
}


int main(){
	
	int first,second,third,fourth,result1,result2;
	cout<<"Enter First elemet of Fraction 1: ";
	cin>>first;
	cout <<"Enter second Element of fraction 1: ";
	cin>>third;
	cout <<"Enter first Element of fraction 2: ";
	cin>>second;

	cout <<"Enter second Element of fraction 2: ";
	cin>>fourth;
	
	result1=func1(first,second,third,fourth);
	cout<<result1;
	cout<<"/";
	result2=func2(fourth,third);
	cout<<result2;
	
	
}
