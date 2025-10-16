#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    int id, salary;
    string name;
    
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();  
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }
    void display() {
        cout << "\nEmployee with Highest Salary:" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];
   
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        emp[i].getData(); 
    }
    
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }
    emp[maxIndex].display();
    return 0;
}
