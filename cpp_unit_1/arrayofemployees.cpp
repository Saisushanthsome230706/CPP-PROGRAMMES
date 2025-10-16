#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;

    
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n]; 

    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        emp[i].getData();
    }


    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    cout << "\nEmployee with the highest salary:\n";
    emp[maxIndex].display();

    return 0;
}
