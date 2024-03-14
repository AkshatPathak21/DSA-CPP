#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int temp = n;
    int mask = 0;

    while (temp !=0)
    {
        mask = (mask<<1) | 1;
        temp = temp>>1;

    }


    int ans = (~n) & mask;
    //edge case
    if (n == 0){
        ans = 1;
    }
    cout <<ans;
    
}