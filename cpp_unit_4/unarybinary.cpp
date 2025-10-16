#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v = 0) {
        value = v;
    }

    friend Number operator++(Number &n);
    friend Number operator++(Number &n, int);
    friend Number operator+(const Number &n1, const Number &n2);

    void display() {
        cout << "value: " << value << endl;
    }
};

Number operator++(Number &n) {
    n.value++;
    return n;
}

Number operator++(Number &n, int) {
    Number temp = n;
    n.value++;
    return temp;
}

Number operator+(const Number &n1, const Number &n2) {
    return Number(n1.value + n2.value);
}

int main() {
    Number n1(5);
    Number n2(10);

    Number n3 = n1 + n2;
    cout << "n3 value: " << n3.value << endl;

    ++n1;
    cout << "After prefix increment, n1: " << n1.value << endl;

    n2++;
    cout << "After postfix increment, n2: " << n2.value << endl;

    return 0;
}
