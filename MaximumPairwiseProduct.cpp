#include <iostream>
#include <vector>
#include <time.h>
#include <stdio.h>
using namespace std;

unsigned long long max_1, max_2;

unsigned long long Max_value(vector<long long> data);

long long brute(vector<long long> data)
{
    long long maxi = -1;
    int n = data.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            long long temp = data[i] * data[j];
            if (temp > maxi && i != j)
            {
                maxi = temp;
            }
        }
    }
    return maxi;
}

int main()
{
    /*
    srand(time(NULL));
    while (1)
    {

        max_1 = max_2 = -1;
        int n = rand() % 10 + 2;
        //cin >> n;
        vector<long long> input(n);
        for (int i = 0; i < n; i++)
        {
            //cin >> input[i];
            input[i] = rand() % 10000;
        }
        max_1 = Max_value(input);
        max_2 = brute(input);
        cout << max_1 << " " << max_2 << endl;

        if (max_1 == max_2)
            cout << "OK" << endl;
        else
        {
            cout << "Wrong" << endl;
            break;
        }
    }
    */
    max_1 = max_2 = -1;
    long long int n;
    cin >> n;
    vector<long long> input(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    max_1 = Max_value(input);
    cout << max_1 << endl;

    return 0;
}

unsigned long long Max_value(vector<long long> data)
{
    long long max_1 = -1;
    long long max_2 = -1;
    int n = data.size();
    int index_1 = 0;
    int index_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (data[i] > max_1)
        {
            max_1 = data[i];
            index_1 = i;
        }
    }
    int j = 0;
    for (int j = 0; j < n; j++)
    {
        if (j != index_1 && data[j] > max_2)
        {
            max_2 = data[j];
            index_2 = j;
        }
    }
    return max_1 * max_2;
}