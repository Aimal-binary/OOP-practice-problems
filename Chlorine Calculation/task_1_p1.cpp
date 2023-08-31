#include <iostream>
using namespace std;
float galConvert(float volInGallon){
	float poolcubic=volInGallon/7.481;
	return poolcubic;
}
float calCl(float desiredCl , float currentCl, float poolcubic, float clCon){
	float clp=(desiredCl-currentCl)*poolcubic/clCon;
	return clp;
}
int main(){
	float volInGallon,desiredCl,currentCl,clCon,poolcubic;
	cout<<"Enter Size of Pool: ";
	cin>>volInGallon;
	cout<<"Enter current level of Chlorine: ";
	cin>>currentCl;
	cout<<"Enter Desired Chlotrine Level: ";
	cin>>desiredCl;
		while(desiredCl<1 || desiredCl>3){
		cout<<"desired chlorine must be in the range of 1--3:";
		cin>>desiredCl;
	}

	cout<<"Enter concentration of chlorine: ";
	cin>>clCon;
	
	float fun1=galConvert(volInGallon);
	
	
	float fun2=calCl(desiredCl,currentCl,fun1,clCon);
	cout<<fun2;

	
	
}
