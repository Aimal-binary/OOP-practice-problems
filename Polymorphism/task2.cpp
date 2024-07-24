#include <iostream>
#include<string>
using namespace std;
class BankAcc{
	protected:
	int account_num;
	string name;
	int balance;
	public:
	BankAcc(int acc_num,string n,int bal):account_num(acc_num),name(n),balance(bal){
	}
	
	virtual void deposit(int amount)=0;
	virtual void withdraw(int amount)=0;
	virtual void display()=0;
};
class Check_acc:public BankAcc{
	public:
	Check_acc(int acc_num,string n,int bal):BankAcc(acc_num,n,bal){
	}
	virtual void writechq(int amount)=0;
	virtual void deposit(int amount)=0;
	virtual void withdraw(int amount)=0;
	virtual void display()=0;
	
};
class service_charge_chk:public Check_acc{
	public:
		int count=0;
	service_charge_chk(int acc_num,string n,int bal):Check_acc(acc_num,n,bal){}
	
		
		void writechq(int amount)override{
			if(count<=3){
				if(amount<=balance){
				cout<<"Cheque written for amount: "<<amount<<endl;
				balance-=amount;
				count++;
			}
			else{
				cout<<"INsuficiamt balance!"<<endl;
			}
			
			
		}
		else{
		cout<<"Number of chqs per month exceeds the limit!, try next month!"<<endl;
		
	}
	}
	
	void deposit(int amount) override{
		balance+=amount;
		cout<<"amount of "<<amount<<" Deposited in ur acnt!"<<endl;
		cout<<"New balance: "<<balance<<endl;
	}
	void withdraw(int amount) override {
		if(amount<=balance){
			cout<<"Amount of "<<amount<<" withdrwan from ur acnt!"<<endl;
			balance-=amount;
			cout<<"New balance: "<<balance<<endl;
		}
		else{
			cout<<"insufficient balance!"<<endl;
		}}
		
		void display() override{
			cout<<"Account number: "<<account_num<<endl;
			cout<<"Owner name: "<<name<<endl;
			cout<<"Blanace: "<<balance<<endl;
		
		}
};

class noservice_chrg_chk:public Check_acc{
	
	
	public:
		float interest;
	noservice_chrg_chk(int acc_num,string n,int bal,float inter):Check_acc(acc_num,n,bal),interest(inter/100){}
	void interest_app() {
        balance+=balance*interest;
        cout<<"Interest applied: "<<interest*100<<"%"<<endl;
        cout<<"New balance: "<<balance<<endl;
    }
	
	void writechq(int amount) override{
		if (balance>=10000){
		
			if(amount<=balance){
			
			balance-=amount;
			cout<<"Chq of amount "<<amount<<" written!"<<endl;
			cout<<"New balance: "<<balance<<endl;
			
		}
	}
	else{
		cout<<"Balance is less than the minimum limit!"<<endl;
	}
}
	void deposit(int amount) override{
		balance+=amount;
		cout<<"Amount of "<<amount<<" dpoisted!"<<endl;
	
	}
	void withdraw(int amount) override {
		if(balance>=10000){
			if(amount<=balance){
				balance-=amount;
				cout<<"AMount of "<<amount<<" withdrwan!"<<endl;
			}
		}
		else{
			cout<<"balance is less than the minimum limit!"<<endl;
		}
	}
	void display() override {
		cout<<"Account  number: "<<account_num<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Balance: "<<balance<<endl;
	
	}
	
	
};
class high_int_chk:public noservice_chrg_chk{
	public:
		
		high_int_chk(int acc_num,string n,int bal,float inter):noservice_chrg_chk(acc_num,n,bal,inter/100){
		}
	void interest_app() {
        balance+=balance*interest;
        cout<<"Interest applied: "<<interest*100<<"%"<<endl;
        cout<<"New balance: "<<balance<<endl;
    }
	
	void writechq(int amount) override{
		if (balance>=20000){
		
			if(amount<=balance){
			
			balance-=amount;
			cout<<"Chq of amount "<<amount<<" written!"<<endl;
			cout<<"New balance: "<<balance<<endl;
			
		}
	}
	else{
		cout<<"Balance is less than the minimum limit!"<<endl;
	}
}
	void deposit(int amount) override{
		balance+=amount;
		cout<<"Amount of "<<amount<<" dpoisted!"<<endl;
	
	}
	void withdraw(int amount) override {
		if(balance>=20000){
			if(amount<=balance){
				balance-=amount;
				cout<<"AMount of "<<amount<<" withdrwan!"<<endl;
			}
		}
		else{
			cout<<"balance is less than the minimum limit!"<<endl;
		}
	}
	void display() override {
		cout<<"Account  number: "<<account_num<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Balance: "<<balance<<endl;
	
	}
	
		
	
	
};
class Saving:public BankAcc{
	public:
		float s_interest;
		Saving(int acc_num,string n,int bal,float inter):BankAcc(acc_num,n,bal),s_interest(inter/100){
		}
			void interest_app() {
        balance += balance * s_interest;
        cout<<"Interest applied: "<<s_interest*100<<"%"<<endl;
        cout<<"New balance: "<<balance<<endl;
    }
			void deposit(int amount) override{
		balance+=amount;
		cout<<"amount of "<<amount<<"Deposited in ur Saving acnt!"<<endl;
		cout<<"New balance of saving account: "<<balance<<endl;
	}
	void withdraw(int amount) override {
		if(amount<=balance){
			cout<<"Amount of "<<amount<<" withdrwan from ur saving acnt!"<<endl;
			balance-=amount;
			cout<<"New balance of saving account: "<<balance<<endl;
		}
		else{
			cout<<"insufficient balance in saving account!"<<endl;
		}}
		
		void display() override{
			cout<<"Account number: "<<account_num<<endl;
			cout<<"Owner name: "<<name<<endl;
			cout<<"Blanace: "<<balance<<endl;
		
		}
};

class high_int_saving:public Saving{
	public:
		high_int_saving(int acc_num,string n,int bal,float inter):Saving(acc_num,n,bal,inter/100){
		}
		
	void interest_app() {
        balance += balance * s_interest;
        cout<<"Interest applied: "<<s_interest*100<<"%"<<endl;
        cout<<"New balance: "<<balance<<endl;
    }
	

	void deposit(int amount) override{
		balance+=amount;
		cout<<"Amount of "<<amount<<" dpoisted!"<<endl;
	
	}
	void withdraw(int amount) override {
		if(balance>=30000){
			if(amount<=balance){
				balance-=amount;
				cout<<"AMount of "<<amount<<" withdrwan!"<<endl;
			}
		}
		else{
			cout<<"balance is less than the minimum limit!"<<endl;
		}
	}
	void display() override {
		cout<<"Account  number: "<<account_num<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Balance: "<<balance<<endl;
	
	}
	
		
	
	
};
class CertificateOfDeposit:public BankAcc {
	public:
    int maturity_months;
    float interest_rate;
    int current_month;

    CertificateOfDeposit(int acc_num,string n,int bal,int months,float rate):BankAcc(acc_num,n,bal),maturity_months(months),interest_rate(rate/100),current_month(0){}

    void deposit(int amount) override {
        cout<<"Cannot deposit to a CD account until maturity!"<<endl;
    }

    void withdraw(int amount) override{
        if (current_month>=maturity_months) {
            if (amount<=balance) {
                balance-=amount;
                cout<<"Amount of "<<amount<<" withdrawn from your CD account!"<<endl;
                cout<<"New balance: "<<balance<<endl;
            } else {
                cout<<"Insufficient balance!"<<endl;
            }
        } else {
            cout<<"Cannot withdraw from a CD account before maturity!"<<endl;
        }
    }

    void apply_interest(){
        if (current_month>=maturity_months) {
            balance += balance * interest_rate;
        cout<<"Interest applied: "<<interest_rate*100<<"%"<<endl;
        cout<< "New balance: "<<balance<<endl;
        } else {
            cout<<"Cannot apply interest before maturity!"<<endl;
        }
    }

    void advance_month(){
        if(current_month<maturity_months) {
            current_month++;
            cout<<"Current month advanced to: "<<current_month<<endl;
        } else {
            cout<<"Certificate of Deposit has matured!"<<endl;
        }
    }

    void display() override {
        cout<<"Account number: "<<account_num<<endl;
        cout<<"Owner name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Maturity months: "<<maturity_months<<endl;
        cout<<"Current month: "<<current_month<<endl;
        cout<<"Interest rate: "<<interest_rate<<endl;
    }
};

int main() {
    service_charge_chk scc(1001,"Aimal",5000);
    noservice_chrg_chk nscc(1002,"ali",15000,5);
    high_int_chk hic(1003,"Hassan",25000,5);
    Saving sav(1004,"obaid",8000,4);
    high_int_saving hisav(1005,"asif",35000,4);
    CertificateOfDeposit cd(1006,"amir",10000,12,3);

cout<<"--------*--------Service Charge Checking----------*---------"<<endl;
    scc.deposit(2000);
    scc.writechq(1000);
    scc.display();
cout<<"--------*--------No Service Charge Checking----------*---------"<<endl;
    nscc.deposit(5000);
    nscc.interest_app();
    nscc.display();
cout<<"--------*--------High interest Checking----------*---------"<<endl;
    hic.deposit(5000);
    hic.interest_app();
    hic.display();
cout<<"--------*--------Savings----------*---------"<<endl;
    sav.deposit(2000);
    sav.interest_app();
    sav.display();
cout<<"--------*--------High interest Saving----------*---------"<<endl;
    hisav.deposit(2000);
    hisav.interest_app();
    hisav.display();
cout<<"--------*--------Certificate of Deposit----------*---------"<<endl;
    cd.display();
    cd.advance_month();
    cd.advance_month();
    cd.withdraw(2000);
    for(int i=0;i<10;i++) {
		cd.advance_month();
	}
    cd.withdraw(2000);
    cd.apply_interest();
    cd.display();

}


