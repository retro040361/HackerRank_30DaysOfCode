#include <iostream>
using namespace std;
#include <math.h>

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent);

int main()
{
    double meal_cost;
    cin >> meal_cost;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //cout << meal_cost << " " << tip_percent << " " << tax_percent << endl;
    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

void solve(double meal_cost, int tip_percent, int tax_percent)
{
    double tip, tax, total;
    tip = meal_cost * ((double)tip_percent / 100.00);
    tax = meal_cost * ((float)tax_percent / 100.0);
    total = meal_cost + tip + tax;
    cout << round(total) << endl;
    return;
}