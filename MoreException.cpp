#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here

class Calculator
{
public:
    int power(int n, int p)
    {
        if (n < 0 || p < 0)
            throw invalid_argument("n and p should be non-negative");
        return pow(n, p) + 0.5;
        /*
        
        int answer;
        answer = (int) (pow(number1,number2) + 0.5);
        
        // because of the precision of the floating point store in memory
        // pow(5,2) may indeed return 24.9999999 instead of 25
        // a proper solution is that round it before storing into a int-type    
        */
    }
};

int main()
{
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while (T-- > 0)
    {
        if (scanf("%d %d", &n, &p) == 2)
        {
            try
            {
                int ans = myCalculator.power(n, p);
                cout << ans << endl;
            }
            catch (exception &e)
            {
                cout << e.what() << endl;
            }
        }
    }
}