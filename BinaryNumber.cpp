#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n;
    while (cin >> n)
    {
        vector<int> binary;
        for (int i = 0; n > 0; i++)
        {
            binary.push_back(n % 2);
            n = n / 2;
        }
        // binary[i] means 2^i terms
        int size = binary.size();
        int conti = 0;
        int maxi = 0;
        for (int i = 0; i < size; i++)
        {
            //cout << binary[i];
            if (binary[i] == 1)
                conti++;
            else
            {
                maxi = conti > maxi ? conti : maxi;
                conti = 0;
            }
        }
        maxi = conti > maxi ? conti : maxi;
        cout << maxi << endl;
    }
}

/*
**高手ㄉ**

#include<iostream>
using namespace std;

int main(void)
{   
    int n;
    cin >> n;
    int count = 0;
    while(n){
        n = (n&(n<<1));
        count++
    }
    cout<<count<<endl;
    return 0;
}

*/