#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Employee {
protected:
    string empName;
    int empNumber;
public:
    Employee(string name, int number):empName(name), empNumber(number){}
    void getData(){
        cout<<"Enter employee name: ";
        cin>>empName;
        cout<<"Enter employee number: ";
        cin>>empNumber;
    }

    void putData() const {
        cout<<"Employee Name: "<<empName<<endl;
        cout<<"Employee Number: "<<empNumber<<endl;
    }

    void writeToFile(ofstream& outFile)const{
        outFile<<empName<<endl;
        outFile<<empNumber<<endl;
    }

    void readFromFile(ifstream& inFile) {
        inFile>>empName;
        inFile>>empNumber;
    }
};

class Manager :public Employee{
private:
    char title;
    double clubDues;

public:
    Manager(string name,int number,char t,double dues)
        : Employee(name,number),title(t),clubDues(dues){}

    void getData() {
        cout<<"Enter employee name: ";
        cin>>empName;
        cout<<"Enter employee number: ";
        cin>>empNumber;
        cout<<"Enter manager title: ";
        cin>>title;
        cout<<"Enter club dues: ";
        cin>>clubDues;
    }

    void putData() const {
        cout<<"Employee Name: "<<empName<<endl;
        cout<<"Employee Number: "<<empNumber<<endl;
        cout<<"Title: " <<title<<endl;
        cout<<"Club Dues: "<<clubDues<<endl;
    }

    void writeToFile(ofstream& outFile)const{
        Employee::writeToFile(outFile);
        outFile<<title<<endl;
        outFile<<clubDues<<endl;
    }

    void readFromFile(ifstream& inFile) {
        Employee::readFromFile(inFile);
        inFile>>title;
        inFile>>clubDues;
    }
};

class Scientist :public Employee{
private:
    int publications;
public:
    Scientist(string name, int number, int pubs): Employee(name, number), publications(pubs) {}

    void getData() {
        cout<<"Enter employee name: ";
        cin>>empName;
        cout<<"Enter employee number: ";
        cin>>empNumber;
        cout<<"Enter number of publications: ";
        cin>>publications;
    }

    void putData() const {
        cout << "Employee Name: "<<empName<< endl;
        cout << "Employee Number: "<<empNumber<<endl;
        cout << "Publications: "<<publications << endl;
    }

    void writeToFile(ofstream& outFile) const {
        Employee::writeToFile(outFile);
        outFile << publications << endl;
    }

    void readFromFile(ifstream& inFile) {
        Employee::readFromFile(inFile);
        inFile >> publications;
    }
};

class Programmer : public Employee {
private:
    double salary;
    string expertise;

public:
    Programmer(string name, int number, double sal, string exp): Employee(name, number), salary(sal), expertise(exp) {}

    void getData() {
        cout<<"Enter employee name: ";
        cin>>empName;
        cout<<"Enter employee number: ";
        cin>>empNumber;
        cout<<"Enter salary: ";
        cin>>salary;
        cout<<"Enter expertise: ";
        cin>>expertise;
    }

    void putData() const {
        cout<<"Employee Name: "<<empName<<endl;
        cout<<"Employee Number: " <<empNumber<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Expertise: "<<expertise<<endl;
    }

    void writeToFile(ofstream& outFile)const{
        Employee::writeToFile(outFile);
        outFile<<salary<<endl;
        outFile<<expertise<<endl;
    }

    void readFromFile(ifstream& inFile){
        Employee::readFromFile(inFile);
        inFile>>salary;
        inFile>>expertise;
    }
};

int main() {
    Manager mgr("abc", 1, 'A', 1244);
    Scientist sci("def", 7, 19);
    Programmer prog("ghi", 1, 100000, "C++");

    ofstream outFile("employees.txt");
    mgr.writeToFile(outFile);
    sci.writeToFile(outFile);
    prog.writeToFile(outFile);
    outFile.close();

    ifstream inFile("employees.txt");
    Manager mgrFromFile("", 0, ' ', 0.0);
    Scientist sciFromFile("", 0, 0);
    Programmer progFromFile("", 0, 0.0, "");
    mgrFromFile.readFromFile(inFile);
    sciFromFile.readFromFile(inFile);
    progFromFile.readFromFile(inFile);
    inFile.close();

    cout<<"Manager Information from File: "<<endl;
    mgrFromFile.putData();
    cout<<endl;
    cout<<"Scientist Information from File:"<<endl;
    sciFromFile.putData();
    cout<<endl;
    cout<<"Programmer Information from File:"<<endl;
    progFromFile.putData();
    cout<<endl;

}

