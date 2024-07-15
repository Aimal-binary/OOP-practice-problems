#include <iostream>
#include <string>
using namespace std;

class laptop{
	private:
		string brand;
		string model;
		int serial;
		string color;
		float price;
		float proc_speed;
		int ram;
		float screensize;
	public:
		void setbrand(string b){
			brand=b;
		}
		void setmodel(string b){
			model=b;
		}
		void setserial(int b){
			serial=b;
		}
		void setcolor(string b){
			color=b;	
		}
		void setprice(float b){
			price=b;
		}
		void setproc_speed(float b){
			proc_speed=b;
		}
		void setram(int b){
			ram=b;
		}
		void setscrn_size(float b){
			screensize=b;
		}
		void up_ram(int b){
			ram=b;
		}
		
		
		void display(){
			
			cout<<"brand: "<<brand<<endl;
			cout<<"model: "<<model;
			cout<<endl<<"serial: "<<serial<<endl;
			cout<<"color: "<<color<<endl;
			cout<<"price: "<<price<<endl;
			cout<<"ProcessorSpeed: "<<proc_speed<<endl;
			cout<<"Ram: "<<ram<<endl;
			cout<<"screen size: "<<screensize<<endl;
		}
	
	
	
};
int main(){


laptop l1;
char ch;
		l1.setbrand("dell");
		l1.setmodel("Latitude");
		l1.setserial(1000);
		l1.setcolor("Grey");
		l1.setprice(75.5);
		l1.setproc_speed(2.5);
		l1.setram(16);
		l1.setscrn_size(13.2);
		cout<<"Current laptop sepcs: "<<endl;
		l1.display();
		cout<<"Do you want to upgrade ram to 32GB (y/n) ?";
		cin>>ch;
		if(ch=='y'){
			l1.up_ram(32);
		}
		cout<<"Final laptop specs: "<<endl;
		l1.display();
		
}

