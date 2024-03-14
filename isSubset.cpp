// Not Complete
#include <iostream>
using namespace std;

bool arraySubset(int arr1[], int arr2[], int len1, int len2)
{
    bool ans = true;
    int i,j = 0;
    while (i<len1)
    {
        while (j<len2)
        {
            if (arr2[j]==arr1[i]){
                break;
            }
            else
            {
                ans = false;
            }
            j++;
        }
        if (ans==false){
            break;
        }
        i++;
    }
    return ans;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 4, 5, 6};
    int arr2[] = {1, 2, 4,8};

    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    bool ans = arraySubset(arr1, arr2, len1, len2);

    // int a1[] = {11, 7, 1, 13, 21, 3, 7, 3};
    // int a2[] = {11, 3, 7, 1, 7};
    // int l1 = sizeof(a1)/sizeof(int);
    // int l2 = sizeof(a2)/sizeof(int);
    // bool ans = arraySubset(a1, a2, l1, l2);

    // for (int i=0; i<n2; i++) {
    //     num = arr2[i];
    //     for (int j=0; i<n1; j++) {
    //         if (arr1[j] == num) continue;
    //         else {
    //             ans = false;
    //             break;
    //         }
    //     }
    // }
    if (ans)
        cout << "true";
    else
        cout << "false";
     return 0;
}