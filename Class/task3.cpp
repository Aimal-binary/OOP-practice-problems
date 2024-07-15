#include <iostream>
#include <string>
using namespace std;

class number{
	public:
	float num;
	int result=1;
	int po_check=0;
	int wh_check=0;
	
	void whole_check(float a){
		int x;
		x=a;
		if((a-x)==0){
			wh_check=1;
		}
	}
	void pos_check(float a){
		if(a>=0){
			po_check=1;
		}
		
		
	}

void fact(float a){
	int fct;
	int c=a;
	
	if(c==1 || c==0){
		result=1;
	}
	for (int i=1;i<=c;i++){
		fct=result*i;
		result=fct;
	}
}
	void display(){
		cout<<"Number: "<<num<<endl;
		cout<<"Factorial: "<<result<<endl;
		
	}
	
	
	
};

int main(){
	number n;
	
	cout<<"Enter number: ";
	cin>>n.num;
	
	n.pos_check(n.num);
	n.whole_check(n.num);
	if((n.po_check==1) && (n.wh_check==1)){
		
		n.fact(n.num);
		n.display();
	}
	else if(n.po_check==0 || n.wh_check==0){
		cout<<"invalid input"<<endl;
	}
	
	
	
	
	
}
