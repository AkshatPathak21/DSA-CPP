#include<iostream>
using namespace std;


bool power(long a){
    int rem=0;
    while (a!=2 && rem!=1)
    {
        rem = a%2;
        a/=2;

    }
    
    if (rem ==0) return true;
    else return false;
}
int main(){
    long n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    bool sol=power(n);
    if (sol) cout<< "true";
    else cout<< "false";
}