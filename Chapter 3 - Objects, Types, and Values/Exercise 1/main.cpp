#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //First TRY THIS
//    double age;
//    string firstName;
//    cout << "Please enter your first name and age (separated by a space): ";
//    cin >> firstName; cin >> age;
//    cout << "Hello, " << firstName << " (age: " << (age * 12) << " months)" << endl;
//    return 0;

    //Second TRY THIS
//    cout << "Please enter a floating-point value: ";
//    int n;
//    cin >> n;
//        cout    << "n == " << n
//                << "\nn+1 == " << n + 1
//                << "\nthree times n == " << 3 * n
//                << "\ntwice n == " << n + n
//                << "\nn squared == " << n * n
//                << "\nhalf of n == " << n/2
//                << "\nsquare root of n == " << sqrt(n)
//                << "\ndivision of n by itself == " << n/n
//                << "\nremainder of n by 2 == " << n%2 //only works with int
//                << "\n";

    //Third TRY THIS

    //Forth TRY THIS
//   string previous{" "};
//   string current;
//   cin >> previous;
//   while (cin >> current)
//   {
//       if (previous == current)
//           cout << "repeated word: " << current << endl;
//       previous = current;
//   }

    //Fifth TRY THIS

    //Sixth TRY THIS

    double d = 0;
    while (cin >> d)
    {
        int i = d;
        char c = i;
        int i2 = c;
        cout    << "d == " << d
                << " i == " << i
                << " i2 == " << i2
                << " char(" << c << ")" << endl;

    }
   return 0;
}