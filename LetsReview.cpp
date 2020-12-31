#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string input;
        vector<char> odd;
        vector<char> even;
        cin >> input;
        int i = 1;
        for (auto word : input)
        {
            if (i % 2 == 1)
                odd.push_back(word);
            else
                even.push_back(word);
            i++;
        }
        int sodd = odd.size();
        int seven = even.size();
        for (int i = 0; i < sodd; i++)
            cout << odd[i];
        cout << " ";
        for (int i = 0; i < seven; i++)
            cout << even[i];
        cout << endl;
    }
    return 0;
}
