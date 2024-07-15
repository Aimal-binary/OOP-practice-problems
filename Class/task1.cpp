#include <iostream>
using namespace std;

class tollBooth{
	private:
	int totalcars;
	double money_collect;
	public:
	int paid=0;
	int unpaid=0;
	void setdata(){
		totalcars=0;
		money_collect=0;
		
	}
	
	void payingcar(){
		totalcars++;
		money_collect+=50;
		paid++;
	}
	
	void nopay(){
		totalcars++;
		unpaid++;
		
	}
	
	void display(){
		cout<<"Total cars: "<<totalcars<<endl;
		cout<<"Paid toll cars: "<<paid<<endl;
		cout<<"Unpaid tolls: "<<unpaid<<endl;
		cout<<"Money coleccted: "<<money_collect<<endl;
		
	}
	
	
	
};



int main(){
	
	tollBooth t1;
	int choice;
	int check=0;
	do{
	
	cout<<"Press 1 to count paying cars: "<<endl;
	cout<<"Press 2 to count non-paying cars: "<<endl;
	cout<<"Press 3 to display all: "<<endl;
	cin>>choice;
	if (choice==1){
		t1.payingcar();
		cout<<"Paying cars counted!"<<endl;
	}
	else if (choice==2){
		t1.nopay();
		cout<<"Unpaid car counted!"<<endl;
	}
	else if(choice==3){
		t1.display();
		check=1;
	}
}
while(check!=1);
	
	
	
	
}




