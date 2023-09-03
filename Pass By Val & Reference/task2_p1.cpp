#include <iostream>
using namespace std;
/*By passing value means that it creates a copy of variable and apply change to it only
not the actual value*/
void func1(int a) {
     a=a*a*a;
    cout<<"By passing value: "<<a<<endl;
}
/*By passing refernce means, no copy is created but we are dealing with the actual value.
i.e if we change the val in Func2 the changes will be reflected in main*/
void func2(int &b) {
    b=b*b*b;
    cout<<"By reference:"<<b<<endl;
}

int main() {
    int num1;
	int num2;
    
    cout << "Enter a number: ";
    cin >> num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
    func1(num1);
    func2(num2);
    
    cout<<"num1:"<<num1<<endl;
/*Num2 now have the value of 125 bcz in Func2 the value is changed from 5 to 125
which now reflected here*/
	cout<<"num2: "<<num2<<endl;
    return 0;
}

