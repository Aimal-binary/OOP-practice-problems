#include <iostream>
#include <string>
using namespace std;

class Number {
public:
    int number;
    static string lessthan20[20];
    static string tens[10];
    string hundred = "hundred";
    string thousand = "thousand";

    Number() {
        cout << "Enter number: ";
        cin >> number;
    }

    void print() {
    	if(number>10000){
    		cout<<"Number exceed the limit!: 0-9999 !"<<endl;
		}
        else if (number < 20) {
            cout << "number: "<<lessthan20[number];
        } else if (number >=20 && number<100) {
            cout << "number: " << tens[number/10];
            if (number % 10 !=0){
                cout <<" "<<lessthan20[number % 10];
            }
        } else if (number >=100 && number< 1000) {
            cout << "number: " <<lessthan20[number / 100] << " hundred";
            if (number % 100 != 0) {
                if ((number % 100)< 20) {
                    cout <<" "<<lessthan20[number % 100];
                } else {
                    cout <<" "<<tens[(number % 100) / 10];
                    if (number % 10 != 0) {
                        cout <<" "<<lessthan20[number % 10];
                    }
                }
            }
        } else if (number >=1000 && number< 10000) {
            cout << "number: " << lessthan20[number / 1000] << " thousand";
            if (number % 1000 != 0) {
                if ((number % 1000) / 100 != 0) {
                    cout << " " << lessthan20[(number % 1000) / 100] << " hundred";
                }
                if (number % 100 != 0) {
                    if ((number % 100) < 20) {
                        cout << " " << lessthan20[number % 100];
                    } else {
                        cout << " " << tens[(number % 100) / 10];
                        if (number % 10 != 0) {
                            cout << " " << lessthan20[number % 10];
                        }
                    }
                }
            }
        }
    }
};

string Number::lessthan20[20] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve",
                                 "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

string Number::tens[10] = {"", "","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

int main() {
    Number n1;
    n1.print();
    return 0;
}

