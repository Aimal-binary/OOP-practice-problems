#include <iostream>
using namespace std;

int main(){
	
	int arr[5];
	
	for(int i=0;i<5;i++){
		cout<<"Enter value "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	
	int *max=&arr[0];
	
	for(int i=0;i<5;i++){
		if(arr[i]>*max){
			max=&arr[i];
		}
		
		
	}
	

	
	cout<<"pointer: "<<max<<endl;
	cout<<"max val: "<<&arr[4];
	
}


