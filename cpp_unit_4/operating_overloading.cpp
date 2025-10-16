#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v = 0) {
        value = v;
    }

    void operator++() {
        ++value;
    }

    Number operator+(Number n) {
        return Number(value + n.value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(10), n2(20);

    cout << "Before increment:" << endl;
    n1.display();

    ++n1;
    cout << "After increment:" << endl;
    n1.display();

    Number n3 = n1 + n2;
    cout << "After addition:" << endl;
    n3.display();

    return 0;
}

