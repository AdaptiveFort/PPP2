#include <iostream>
using namespace std;

int main() {
    string op;
    double x, y;
    cout << "Welcome to your personal calculator. Enter an operator followed by two floating-numbers to get the result: ";
    while (cin >> op && cin >> x && cin >> y)
    {
        if (op == "+" || op == "add" || op == "plus") cout << "Result of " << x << " " << op << " " << y << " = " << x + y << endl;
        else if (op == "-" || op == "minus" || op == "subtract") cout << "Result of " << x << " " << op << " " << y << " = " << x - y << endl;
        else if (op == "*" || op == "mul" ) cout << "Result of " << x << " " << op << " " << y << " = " << x * y << endl;
        else if (op == "/" || op == "div" ) cout << "Result of " << x << " " << op << " " << y << " = " << x / y << endl;
        else cout << "Operator is in correct!" << endl;
    }
    return 0;
}
