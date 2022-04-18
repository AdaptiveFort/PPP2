#include <iostream>
using namespace std;
int main() {
    double val1, val2;
    cout << "Enter two floating-point values (separated by a space) to get their calculations: ";
    while (cin >> val1 && cin >> val2)
    {
        if (val1 > val2)
            cout << val1 << " > " << val2 << endl;
        else
            if (val1 < val2) cout << '\n' << val1 << " < " << val2 << endl;
            cout << "Sum of " << val1 << " + " << val2 << " = " << val1 + val2 << endl;
            cout << "Difference " << val1 << " - " << val2 << " = " << val1 - val2 << endl;
            cout << "Product of " << val1 << " * " << val2 << " = " << val1 * val2 << endl;
            cout << "Ratio of " << val1 << " : " << val2 << " = " << val1/val2 << endl;
            // int/int will result in int, albeit in correct. This is because you are using the integer division
            // version of operator/, which takes 2 ints and returns an int. In order to use the double version,
            // which returns a double, at least one of the ints must be explicitly casted to a double.
    }


    return 0;
}
