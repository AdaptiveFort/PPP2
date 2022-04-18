#include <iostream>
using namespace std;
int main() {
    int val;
    cout << "Enter a value to determine if its odd or even: ";
    while (cin >> val)
    {
        if (val % 2 == 0 ) cout << "This value.. " << val << " is even!" << endl;
        if (val % 2 == 1 ) cout << "This value.. " << val << " is odd!" << endl;

    }
    return 0;
}