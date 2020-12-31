#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin >> n;
    map<string, string> input;
    for (int i = 0; i < n; i++)
    {
        string name, phone_num;
        cin >> name >> phone_num;
        input.insert(pair<string, string>(name, phone_num));
    }
    map<string, string>::iterator iter;
    string query;
    while (cin >> query)
    {
        iter = input.find(query);
        if (iter->first == query)
        {
            cout << iter->first << "=" << iter->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
        /*if(input.find(query)==input.end()){
            cout << "Not found" << endl;
        }*/
    }
    return 0;
}