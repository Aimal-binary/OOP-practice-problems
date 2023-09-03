#include <iostream>
using namespace std;
const int ROWS = 5;
const int COLS = 6;
void initialiseSeats(char arr[][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      arr[i][j] = 'E';
    }
  }
}
void displaySeating(char arr[][COLS]) {
  for (int i = 0; i < ROWS; i++) {
  	cout<<++i;
  	i--;
    for (int j = 0; j < COLS; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
bool bookSeat(char arr[][COLS], int r, int c) {

  if (arr[r-1][c-1] == 'E') {
    arr[r-1][c-1] = 'B';
    return true;
  }
	else {
    return false;
  }
}
int availableSeats(char arr[][COLS]) {
  int count = 0;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if (arr[i][j] == 'E') {
        count++;
      }
    }
  }
  return count;
}

int main() {

  char arr[ROWS][COLS];
  initialiseSeats(arr);

 

  int r, c;
  while (true) {
  		cout<<"*-------------*-------------*-------------*-------------*"<<endl;
  		for(int i=1;i<=6;i++){
		cout<<" "<<i;
		
	}
	cout<<endl;

	displaySeating(arr);


    cout << "Enter the number of Row : ";
    cin >> r;
	cout<<"Enter number of Col: ";
	cin>>c;
	if(c>COLS || r>ROWS || c<=0 || r<=0){
		cout<<"Invalid input"<<endl;
		cout<<"Number of Rows 1--5"<<endl<<"Number of Cols 1--6";
		break;
	}
    bool isBooked = bookSeat(arr, r, c);
	
    if (isBooked) {
      cout << "Seat booked successfully!" << endl;
    } 
	else {
      cout << "Seat is already booked!" << endl;
    }

    
    displaySeating(arr);

   
    int tAvailable = availableSeats(arr);
    if (tAvailable == 0) {
      cout << "All seats are booked!" << endl;
      break;
    }
    cout << "Total number of Available seats: " << tAvailable << endl;
  }
  return 0;
}

