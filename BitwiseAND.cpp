#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int time;
    cin >> time;
    while (time--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> s;
        for (int i = 1; i <= n; i++)
        {
            s.push_back(i);
        }
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int temp = max(maxi, (s[i] & s[j]));
                if (temp < k)
                    maxi = temp;
            }
        }
        cout << maxi << endl;
    }
    return 0;
}
