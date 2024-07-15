#include <iostream>
using namespace std;

struct point{
	int x;
	int y;
	
};


int main(){
	
	point point1,point2,point3;
	cout<<"Enter coordinates for p1: ";
	cin>>point1.x>>point1.y;
	
	cout<<"Enter coordinates for p2: ";
	cin>>point2.x>>point2.y;
	
	point3.x=point1.x+point2.x;
	point3.y=point1.y+point2.y;
	
	cout<<"Coordinates of p1+p2 are: "<<point3.x<<","<<point3.y;

	
	
}

