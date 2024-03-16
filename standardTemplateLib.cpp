# include <bits/stdc++.h>
# include <utility>
using namespace std;

void explainPairs(){
    //Declaration of Pairs
    pair<int, int> p = {1,3};
    cout<<"The first element of pair is "<<p.first<<" and the second element is "<<p.second<<endl;

    //Nested pair
    pair <int , pair<string, int >> p2 = {10053 ,{"Akshat", 21}};
    cout<<"Reg No.: "<<p2.first<<" Name: "<<p2.second.first<<" Age: "<<p2.second.second<<endl;

    //Array of Pairs
    pair<int, int> arr[] = {{2,3},{5,7},{11,13}};
    cout<<arr[2].first<<endl;
}

void explainVectors(){
    //Declaration of Vectors
    cout<<"Vectors"<<endl;
    vector<int> v; //creates an empty container
    v.push_back(1);
    v.emplace_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(11);

    vector<pair<int,int>> v2;
    v2.push_back({1,3});
    v2.emplace_back(5,7); //emplace back automatically assumes the datatype of the input

    vector<int> v3(5,100); //v3(size , value) --> {100,100,100,100,100}
    vector<int> v4(5); //{32348897,31287451,21546,03264,-1229847} garbage values

    vector<int> v5(5,20);
    vector<int> v6(v5); // creates a copy of v5 vector

    cout<<v[1]<<endl;
    cout<<v2[1].first<<endl;
    cout<<v3.at(0)<<endl;

    //Acessing elements using iterators
    vector<int>::iterator it = v.begin();
    cout<<*it<<" ";
    it++;
    cout<<*it<<" ";
    it = it + 2;
    cout<<*it<<" ";
    cout<<endl<<"Accessing using for loop"<<endl;

    //Printing elements using loops
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

}

int main(){
    explainPairs();
    explainVectors();
}