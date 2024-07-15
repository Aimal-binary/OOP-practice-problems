#include <iostream>
#include <string>
using namespace std;

class SavingAcc{
	private:
		float saving_balance;
		
	public:
	void set_bal(float b){
		saving_balance=b;
	}
	
	static float annual_int_rate;
	static float modify_int_rate;
	
	
	void calc_monthly_intr(){
		float calc=((saving_balance*annual_int_rate)/12);
		saving_balance+=calc;

	}
	
	void dispaly(){
		cout<<"Balance of saver : "<<saving_balance<<endl;
	}
	void mod_int(){
		annual_int_rate=modify_int_rate;
	}
	
	
};

float SavingAcc::annual_int_rate=0.03; /* 3/100=0.003 percent*/
float SavingAcc::modify_int_rate=0.04;

int main(){
	
	SavingAcc saver1,saver2;

	saver1.set_bal(2000);
	saver2.set_bal(3000); 
	saver1.calc_monthly_intr();
	saver2.calc_monthly_intr();
	saver1.dispaly();
	saver2.dispaly();
	
	cout<<"Interst rate inc to 4 percnt!"<<endl;
	saver1.mod_int();
	saver2.mod_int();
	saver1.calc_monthly_intr();
	saver2.calc_monthly_intr();
	saver1.dispaly(); 
	saver2.dispaly(); 
	
}
