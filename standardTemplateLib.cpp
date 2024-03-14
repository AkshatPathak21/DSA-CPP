# include <iostream>
# include <utility>
using namespace std;

void explainPairs(){
    //Declaration of Pairs
    pair<int, int> p = {1,3};
    cout<<"The first element of pair is "<<p.first<<" and the second element is "<<p.second<<endl;

    //Nested pair
    pair <int , pair<string, int >> p2 = {10053 ,{"Akshat", 21}};
    cout<<"REg No.: "<<p2.first<<" Name: "<<p2.second.first<<" Age: "<<p2.second.second<<endl;

    //Array of Pairs
    pair<int, int> arr[] = {{2,3},{5,7},{11,13}};
    cout<<arr[2].first;
}

int main(){
    explainPairs();
}