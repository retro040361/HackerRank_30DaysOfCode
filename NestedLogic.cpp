#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int day_1, day_2, mth_1, mth_2, yr_1, yr_2;

    cin >> day_1 >> mth_1 >> yr_1 >> day_2 >> mth_2 >> yr_2;

    if (yr_1 < yr_2 || (yr_1 == yr_2 && mth_1 < mth_2) || (yr_1 == yr_2 && mth_1 == mth_2 && day_1 < day_2))
    {
        cout << 0 << endl;
        return 0;
    }

    if (yr_1 == yr_2)
    {
        if (mth_1 == mth_2)
        {
            if (day_1 == day_2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << (day_1 - day_2) * 15 << endl;
            }
        }
        else
        {
            cout << (mth_1 - mth_2) * 500 << endl;
        }
    }
    else
    {
        cout << 10000 << endl;
    }

    return 0;
}