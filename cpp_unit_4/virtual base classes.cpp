#include <iostream>
using namespace std;

class A {
public:                 
    void func() {
        cout << "A" << endl;
    }
};

class B : virtual public A { };

class C : virtual public B { };

class D : virtual public C { };

int main() {
    D obj;        
    obj.func();   
    return 0;
}

