#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    
    Student(int i, string n) {
        id = i;
        name = n;
    }

    
    Student(const Student &s) {
        id = s.id;
        name = s.name;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "sushanth");   
    Student s2 = s1;            

    cout << "Original Student: ";
    s1.display();

    cout << "Copied Student: ";
    s2.display();

    return 0;
}


