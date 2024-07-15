#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    const string institute = "FAST";
    string name;
    float gpa;
    int marks[3];
    string email;

public:
    Student(string n, string em, int m[3]) {
        name = n;
        email = em;
        for (int i = 0; i < 3; ++i) {
            marks[i] = m[i];
        }
        gpa = 0.0; 
    }

    void calc_gpa() {
        int sum = 0;
        for (int i = 0; i < 3; ++i) {
            sum += marks[i];
        }
        float avg = sum / 3.0;
        	if(avg>=90){
			gpa=4;
		}
		else if(avg>=80 && avg<90){
			gpa=3.5;
		}
		else if(avg>=70 && avg<80){
			gpa=3;
		}
		else if (avg>=60 && avg<70){
			gpa=2.5;
		}
		else if(avg>=50 && avg<60){
			gpa=2;
		}
		else if(avg>=40 && avg<50){
			gpa=1.5;
			
		}
		else if(avg>=30 && avg<40){
			gpa=1;
		}
		else if(avg>=20 && avg <30){
			gpa=0;
		}
	}

      

    void display() const {
        cout << "Institute: " << institute << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "GPA: " << gpa << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "Marks of subj " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

int main() {
    int marks1[3] = {95, 88, 92};
    int marks2[3] = {75, 80, 70};
    int marks3[3] = {50, 55, 60};

    Student students[3] = {
        Student("abc", "abc@nu.edu.pk", marks1),
        Student("def", "def@nu.edu.pk", marks2),
        Student("ghi", "ghi@nu.edu.pk", marks3)
    };

    for (int i = 0; i < 3; ++i) {
        students[i].calc_gpa();
    }

    for (int i = 0; i < 3; ++i) {
        students[i].display();
        cout << endl;
    }

    return 0;
}


