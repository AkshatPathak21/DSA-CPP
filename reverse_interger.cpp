#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;

    int ans = 0;
    int digit = 0;
    while (num != 0)
    {
        digit = num % 10;
        if ((ans > INT32_MAX / 10)||(ans < INT32_MAX / 10)){
            ans = 0;
            break;
        }
        num = num / 10;
        ans = ans * 10 + digit;
    }
    cout << "Reverse number: " << ans << endl;
}