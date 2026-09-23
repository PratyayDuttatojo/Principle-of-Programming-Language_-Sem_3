#include <iostream>
using namespace std;

class Employee {
    string name;
    float salary;
    int id;
    static int nextId;

public:
    Employee(string n, float s) {
        name = n;
        salary = s;
        id = nextId++;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int Employee::nextId = 1001;

int main() {
    Employee e1("Rahul", 30000);
    Employee e2("Amit", 40000);
    Employee e3("Riya", 35000);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}
