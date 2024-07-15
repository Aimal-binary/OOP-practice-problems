#include <iostream>
using namespace std;
int main(){
	
	int num;
	int *ptr;
	
	cout<<"Enter value: ";
	cin>>num;
	
	
	ptr=&num;
	
	cout<<"Value by pointer: "<<*ptr<<endl;
	cout<<"memory addr by pointer: "<<ptr<<endl;
	cout<<"memory addre of num: "<<&num;
	
	
}
