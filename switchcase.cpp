#include<iostream>
using namespace std;

int calculator(int a,int b,int c){
    int ans = 0;
    switch (c)
    {
    case 1:
        ans = a+b;
        break;
    case 2:
        ans = a-b;
        break;
    case 3:
        ans = a*b;
        break;
    case 4:
        ans =  a/b;
        break;
    
    default:
        break;
    }
    return ans;
}

int main(){
    int n1,n2,o;
    cout<<"Enter n1: "<<endl;
    cin>>n1;
    cout<<"Enter n2: "<<endl;
    cin>>n2;
    cout<<"Enter the operation to perform: "<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.subtract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divide"<<endl;
    cin>>o;
    cout<<calculator(n1,n2,o);
}