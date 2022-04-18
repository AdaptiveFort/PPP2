#include <iostream>
using namespace std;

int main() {
    int pennies, nickels, dimes, quarters, halfDollars;
    cout << "Hello and welcome to your personal banker!" << endl;
    cout << "\n\tHow many pennies do you have? "; cin >> pennies;
    cout << "\n\tHow many nickels do you have? "; cin >> nickels;
    cout << "\n\tHow many dimes do you have? "; cin >> dimes;
    cout << "\n\tHow many quarters do you have? "; cin >> quarters;
    cout << "\n\tHow many half dollars do you have? "; cin >> halfDollars;

    if (pennies > 1) cout << "\n You have " << pennies << " pennies" << endl;
    else cout << "\n You have 1 penny" << endl;
    if (nickels > 1) cout << "\n You have " << nickels << " nickels" << endl;
    else cout << "\n You have 1 nickel" << endl;
    if (dimes > 1) cout << "\n You have " << dimes << " dimes" << endl;
    else cout << "\n You have 1 dime" << endl;
    if (quarters > 1) cout << "\n You have " << quarters << " quarters" << endl;
    else cout << "\n You have 1 quarter" << endl;
    if (halfDollars > 1) cout << "\n You have " << halfDollars << " half dollars" << endl;
    else cout << "\n You have 1 half dollar" << endl;
    cout << "\n You have a total of $" << (pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfDollars * 50))/100.00 << " dollars" << endl;

    return 0;
}
