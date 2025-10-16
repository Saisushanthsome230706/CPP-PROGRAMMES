#include <iostream>
using namespace std;

class student
{
    int id;
public:
    student(int i)
	{
		id = i; 
        cout << "Constructor called\n";
    }

    
    student(const student &s) {
        id = s.id;
        cout << "constructor called\n";
    }

    void display() {
        cout << "ID:" << id << endl;
    }
};

int main() {
    student s1(100);    
    student s2 = s1;    

    s1.display();
    s2.display();

    return 0;
}
