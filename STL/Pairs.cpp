//STL= Standard Templete Library
// Algorithms
// Functions
// Containers
// Iterators
#include<bits/stdc++.h>
using namespace std;

//pairs
int main(){
    pair<int , int>p={1,3};
    pair<int, pair<int,int>> q = {1,{2,3}};
    cout<<p.first<<p.second<<q.first<<q.second.first<<q.second.second;
    pair<int, int> arr[]={{1,2},{2,3}};
    cout<<arr[0].second;
    return 0;
}