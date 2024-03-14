#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number: " << endl;
    cin >> n;

    int ans = 0;
    int curr = 1;
    int mul;
    for (int i = 1; i <= n; i++)
    {
        mul = 1;
        for (int j = 1; j <= i; j++)
        {
            mul = mul * curr;
            curr++;
        }
        ans = ans + mul;
    }
    if (ans > (__LONG_MAX__)%10000000+7){
        ans = -1;
    }
    cout << ans << endl;
}