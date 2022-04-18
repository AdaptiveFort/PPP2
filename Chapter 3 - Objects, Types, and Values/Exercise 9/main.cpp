#include <iostream>
using namespace std;

int main() {

    string val;
    cout << "Enter number word to convert to digit: ";

    while (cin >> val)
    {
        if (val == "zero") cout << "value for " << val << " is 0" << endl;
        else if (val == "one") cout << "value for " << val << " is 1" << endl;
        else if (val == "two") cout << "value for " << val << " is 2" << endl;
        else if (val == "three") cout << "value for " << val << " is 3" << endl;
        else if (val == "four") cout << "value for " << val << " is 4" << endl;
        else  cout << "value for " << val << " is not a number!" << endl;
    }

    return 0;
}
