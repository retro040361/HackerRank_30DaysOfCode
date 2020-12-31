#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int inte;
    double fpoint;
    string input;
    // Read and save an integer, double, and String to your variables.
    cin >> inte;
    cin >> fpoint;
    getchar();
    getline(cin, input);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout << inte + i << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(2) << fpoint + d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << input << endl;
    return 0;
}