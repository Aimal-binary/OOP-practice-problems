#include <iostream>
using namespace std;

struct time{
int hours;
int mins;
int sec;
};

int main(){
time t;

cout<<"Enter a time id HH:MM:SS";
cin>>t.hours>>t.mins>>t.sec;

int sec=t.hours*3600+t.mins*60+t.sec;

cout<<"Number of seconds : "<<sec<<endl;



}

