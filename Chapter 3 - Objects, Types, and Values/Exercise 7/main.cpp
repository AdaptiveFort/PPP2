#include <iostream>
using namespace std;
int main() {
    string val[3];
    cout << "Enter three values (separated by a space) to get them sorted: ";
    while (cin >> val[0] && cin >> val[1] && cin >> val[2])
    {
        cout << "Before sorting.. " << val[0] << ", " << val[1] << ", " << val[2] << endl;
        sort(begin(val), end(val));
        cout << "After sorting.. " << val[0] << ", " << val[1] << ", " << val[2] << endl;
    }
    return 0;
}