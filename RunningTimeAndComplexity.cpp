#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

vector<int> primes;
void FindPrime(int num);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int num;
    int time;
    cin >> time;
    while (time--)
    {
        cin >> num;
        if (num == 1)
        {
            cout << "Not prime" << endl;
            continue;
        }
        if (num == 2)
        {
            cout << "Prime" << endl;
            continue;
        }
        FindPrime(sqrt(num));
        int n = primes.size();
        int check = 0;

        for (int i = 0; i < n; i++)
        {
            if (num % primes[i] == 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;

        /*
        for (int i = 0; i < n; i++)
        {
            cout << primes[i] << " ";
        }
        cout << endl;*/
        primes.clear();
    }

    return 0;
}
/*判斷 n 以內的質數，只需要判斷能不能被sqrt(n)內的質數整除就好*/
void FindPrime(int num)
{
    if (num <= 2)
    {
        primes.push_back(2);
        return;
    }
    int sqrt_num = (int)sqrt(num);
    FindPrime(sqrt_num);
    int size = primes.size();
    //cout << "num: " << num << " ,sqrt: " << sqrt_num << endl;
    for (int i = num; i >= sqrt_num; i--)
    {
        int check = 0;
        for (int j = 0; j < size; j++)
        {
            //cout << i << " / " << primes[j] << endl;
            if (i % primes[j] == 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 0 && i != 1)
            primes.push_back(i);
    }
    return;
}