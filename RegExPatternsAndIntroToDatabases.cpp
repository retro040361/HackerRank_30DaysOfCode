#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> name;
vector<vector<char>> email;
vector<string> answer;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        name.push_back(temp);
        cin >> temp;
        int j = 0;
        vector<char> tmp;
        for (auto word : temp)
            tmp.push_back(word);
        email.push_back(tmp);
    }
    char mail[10] = {'@', 'g', 'm', 'a', 'i', 'l', '.', 'c', 'o', 'm'};
    for (int i = 0; i < n; i++)
    {
        int size = email[i].size();
        int check = 1;
        for (int j = size - 1, k = 9; k >= 0; j--, k--)
        {
            if (email[i][j] != mail[k])
            {
                check = 0;
                break;
            }
        }
        if (check)
            answer.push_back(name[i]);
    }
    sort(answer.begin(), answer.end());
    int ans_size = answer.size();
    for (int i = 0; i < ans_size; i++)
    {
        cout << answer[i] << endl;
    }
    return 0;
}