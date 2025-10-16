#include<iostream>
using namespace std;

class complex {
    float real;
    float imag;

public:
    complex(float r=0, float i=0.0) {
        real = r;
        imag = i;
    }

    // Friend function for operator overloading
    friend complex operator+(complex c1, complex c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Definition of friend function
complex operator+(complex c1, complex c2) {
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    complex c1(2.5, 3.5), c2(1.5, 2.5);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    complex c3 = c1 + c2;

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}

