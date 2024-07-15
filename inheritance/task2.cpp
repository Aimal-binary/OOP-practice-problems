#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string empName;
    int empNumber;

public:
    Employee(string name, int number) : empName(name), empNumber(number) {}

    void getData() {
        cout << "Enter employee name: ";
        cin >> empName;
        cout << "Enter employee number: ";
        cin >> empNumber;
    }

    void putData() const {
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Number: " << empNumber << endl;
    }
};

class Manager : public Employee {
private:
    char title;
    double clubDues;

public:
    Manager(string name, int number, char t, double dues)
        : Employee(name, number), title(t), clubDues(dues) {}

    void getData() {
        cout << "Enter employee name: ";
        cin >> empName;
        cout << "Enter employee number: ";
        cin >> empNumber;
        cout << "Enter manager title: ";
        cin >> title;
        cout << "Enter club dues: ";
        cin >> clubDues;
    }

    void putData() const {
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Number: " << empNumber << endl;
        cout << "Title: " << title << endl;
        cout << "Club Dues: " << clubDues << endl;
    }
};

class Scientist : public Employee {
private:
    int publications;

public:
    Scientist(string name, int number, int pubs)
        : Employee(name, number), publications(pubs) {}

    void getData() {
        cout << "Enter employee name: ";
        cin >> empName;
        cout << "Enter employee number: ";
        cin >> empNumber;
        cout << "Enter number of publications: ";
        cin >> publications;
    }

    void putData() const {
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Number: " << empNumber << endl;
        cout << "Publications: " << publications << endl;
    }
};

class Programmer : public Employee {
private:
    double salary;
    string expertise;

public:
    Programmer(string name, int number, double sal, string exp)
        : Employee(name, number), salary(sal), expertise(exp) {}

    void getData() {
        cout << "Enter employee name: ";
        cin >> empName;
        cout << "Enter employee number: ";
        cin >> empNumber;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter expertise: ";
        cin >> expertise;
    }

    void putData() const {
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Number: " << empNumber << endl;
        cout << "Salary: " << salary << endl;
        cout << "Expertise: " << expertise << endl;
    }
};

int main() {
    Manager mgr("abc", 1, 'A', 1244);
    Scientist sci("def", 7, 19);
    Programmer prog("ghi", 1, 100000, "C++");

    cout << "Manager Information:" << endl;
    mgr.putData();
    cout << endl;

    cout << "Scientist Information:" << endl;
    sci.putData();
    cout << endl;

    cout << "Programmer Information:" << endl;
    prog.putData();
    cout << endl;

    return 0;
}

