#include <iostream>
using namespace std;

struct Account {
    int accountNo;
    string customerName;
    double balance;
};

int main() {
    int n;
    cin >> n;

    Account a[n];
    double total = 0;
    int high = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i].accountNo;
        cin >> a[i].customerName;
        cin >> a[i].balance;

        total += a[i].balance;

        if(a[i].balance > a[high].balance)
            high = i;
    }

    cout << "Account Details:\n";
    for(int i = 0; i < n; i++)
        cout << a[i].accountNo << " " << a[i].customerName << " " << a[i].balance << endl;

    cout << "\nBalance greater than 50000:\n";
    for(int i = 0; i < n; i++)
        if(a[i].balance > 50000)
            cout << a[i].customerName << " " << a[i].balance << endl;

    cout << "\nHighest Balance: " << a[high].customerName << " " << a[high].balance;
    cout << "\nTotal Balance: " << total;

    return 0;
}
