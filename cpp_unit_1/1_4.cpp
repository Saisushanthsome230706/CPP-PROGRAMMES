#include <iostream>
using namespace std;
class Demo
 {
private:
    int privateVar;
protected:
    int protectedVar;

public:
    int publicVar;

    
    Demo(int pvt = 1, int prt = 2, int pub = 3) {
        privateVar = pvt;
        protectedVar = prt;
        publicVar = pub;
    }

    void display(int a = 10, int b = 20) {
        cout << "a = " << a << ", b = " << b << endl;
    }

    void show() {
        cout << "Private variable: " << privateVar << endl;
        cout << "Protected variable: " << protectedVar << endl;
        cout << "Public variable: " << publicVar << endl;
    }
};

int main() {
    Demo obj;  
    obj.display();
    obj.display(100);
    obj.display(100, 200);
    obj.show();
    cout << "Accessing publicVar directly: " << obj.publicVar << endl;
    return 0;
}

