#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int v) { x = v; }
    Number operator - (Number obj) {
        return Number(x - obj.x);
    }

    void show() { cout << x << endl; }
};

int main() {
    Number n1(10), n2(4);
    Number n3 = n1 - n2;
    n3.show();
}

