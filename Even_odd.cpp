#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd << endl;

    return 0;
}
