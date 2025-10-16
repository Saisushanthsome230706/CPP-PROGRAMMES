#include <iostream>
using namespace std;

// Single Inheritance
class A {
public:
    void displayA() {
        cout << "This is class A (base class - single inheritance)" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "This is class B (Derived from A - single inheritance)" << endl;
    }
};

// Multiple Inheritance
class X {
public:
    void displayX() {
        cout << "This is class X (base class for multiple inheritance)" << endl;
    }
};

class Y {
public:
    void displayY() {
        cout << "This is class Y (base class for multiple inheritance)" << endl;
    }
};

class Z : public X, public Y {
public:
    void displayZ() {
        cout << "This is class Z (Derived from X and Y - multiple inheritance)" << endl;
    }
};

// Multilevel Inheritance
class Parent {
public:
    void displayParent() {
        cout << "This is Parent class (base of multilevel inheritance)" << endl;
    }
};

class Child : public Parent {
public:
    void displayChild() {
        cout << "This is Child class (derived from Parent)" << endl;
    }
};

class GrandChild : public Child {
public:
    void displayGrandChild() {
        cout << "This is GrandChild class (derived from Child - multilevel)" << endl;
    }
};

int main() {
    cout << "--- Single Inheritance ---" << endl;
    B b;
    b.displayA();
    b.displayB();

    cout << "\n--- Multiple Inheritance ---" << endl;
    Z z;
    z.displayX();
    z.displayY();
    z.displayZ();

    cout << "\n--- Multilevel Inheritance ---" << endl;
    GrandChild gc;
    gc.displayParent();
    gc.displayChild();
    gc.displayGrandChild();

    return 0;
}


