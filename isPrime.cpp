#include <iostream>
using namespace std;

bool isPrime(int a){
    int count = 0;
    for (int i = 1; i < a; i++)
    {
        int rem;
        rem = a%i;
        if (rem == 0){
            count++;
        }
    }
    
    if (count >2) return false;
    else return true;
}

bool isPrimeAlso(int a){
    int rem2 = 1;
    for (int i = 2; i < a-1; i++)
    {
        rem2 = a%i;
        if (rem2 == 0) break;
    }

    if (rem2 == 0) return false;
    else return true;
    
    
}
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    bool ans = isPrimeAlso(n);
    if (ans){
        cout<<"Number is Prime";
    }
    else{
        cout<<"Number is not prime";
    }
    return 0;
}