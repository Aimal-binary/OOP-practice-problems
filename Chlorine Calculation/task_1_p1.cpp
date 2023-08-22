#include <iostream>
using namespace std;
float galConvert(float volInGallon){
	float poolcubic=volInGallon/7.481;
	return poolcubic;
}
float calCl(int desiredCl , int currentCl, int poolcubic, int clCon){
	int clp=(desiredCl-currentCl)*poolcubic/clCon;
	return clp;
}
int main(){
	int volInGallon,desiredCl,currentCl,clCon,poolcubic;
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
	
	
	float fun2=calCl(desiredCl,currentCl,poolcubic,clCon);
	cout<<fun2;

	
	
}
