#include <iostream>
#include <string>
using namespace std;

class serial{
	public:
		string s_no;
		static int count;
		serial(){
			count++;
			s_no="2022FAST" + to_string (count)+"OOP";
		}
		void display(){
			cout<<"i am object with serial number: "<<s_no<<endl;
		}
		
	
};

int serial::count=0; 

int main(){
	serial s1;
	serial s2;
	s1.display();
	s2.display();
	
	
	
}
