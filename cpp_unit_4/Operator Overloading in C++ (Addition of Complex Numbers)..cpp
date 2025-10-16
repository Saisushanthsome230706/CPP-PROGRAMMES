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

    // Operator overloading +
    complex operator+(const complex& c) {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    complex c1(3.5, 2.5), c2(1.6, 3.4);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    complex c3 = c1 + c2;

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}

