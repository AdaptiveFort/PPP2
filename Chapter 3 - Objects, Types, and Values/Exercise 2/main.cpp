#include <iostream>
//Exercise 2
using namespace std;
int main() {
    double miles;
    std::cout << "Welcome to miles to kilometers convert, please enter value for miles: ";
    while (cin >> miles){
        cout << static_cast<double>(miles) << " Equal to " << (miles * 1.609) << "KMs";
    }

    return 0;
}
