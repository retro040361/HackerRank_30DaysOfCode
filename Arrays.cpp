#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *data = new int[n];
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> data[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << data[i];
        if (i != n - 1)
            cout << " ";
    }
    return 0;
}