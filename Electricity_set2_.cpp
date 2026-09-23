#include <iostream>
using namespace std;

class ElectricityBill {
    string name;
    int units;
    static double serviceCharge;

public:
    ElectricityBill(string n, int u) {
        name = n;
        units = u;
    }

    static void changeCharge(double c) {
        serviceCharge = c;
    }

    void calculateBill() {
        double bill = units * 5 + serviceCharge;
        cout << name << " : Rs." << bill << endl;
    }
};

double ElectricityBill::serviceCharge = 100;

int main() {
    ElectricityBill a("Rahul", 100);
    ElectricityBill b("Amit", 200);

    ElectricityBill::changeCharge(150);

    a.calculateBill();
    b.calculateBill();

    return 0;
}
