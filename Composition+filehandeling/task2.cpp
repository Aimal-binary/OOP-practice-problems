#include <iostream>
#include <string>
using namespace std;
class Brain {
private:
    string thoughts;
    int neurons;
public:
    Brain(string thoughts,int neurons) :thoughts(thoughts),neurons(neurons) {}
    void display(){
        cout<<"Brain: Thoughts = "<<thoughts<< ", Neurons: "<<neurons<<endl;
    }
};

class Heart {
private:
    int bpm; 
    double weight;

public:
    Heart(int bpm, double weight):bpm(bpm),weight(weight){}

    void display()  {
        cout<<"Heart: BPM = "<<bpm<<", Weight = "<<weight<<" grams"<<endl;
    }
};

class Legs {
private:
    int fingers;
    double length;

public:
    Legs(int fingers, double length) :fingers(fingers),length(length){}

    void display() {
        cout << "Legs: Number of Fingers: "<<fingers<<", Length: "<<length<<" cm"<<endl;
    }
};

class Person {
private:
    string name;
    Brain brain;
    Heart heart;
    Legs legs;

public:
    Person(string name, string thoughts,int neurons,int bpm,double weight, int fingers, double length)
        : name(name), brain(thoughts, neurons), heart(bpm, weight), legs(fingers, length) {}

    void display() {
        cout<<"Person: Name: "<<name<< endl;
        brain.display();
        heart.display();
        legs.display();
    }
};

int main() {
    Person person("ali","no_thoughts",1000000,72,500,20,50);
    person.display();

    return 0;
}

