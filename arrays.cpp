#include <iostream>
using namespace std;




void printArray(int arr[],int size){
    cout<<"Array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void maxElement(int arr[],int size){
    int max ;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    cout<<"The maximum element is "<<max<<endl;
}

void minElement(int arr[],int size){
    int min ;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    cout<<"The mminimum element is "<<min<<endl;
}

int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    
    printArray(arr1,n);
    maxElement(arr1,n);
    minElement(arr1,n);
}