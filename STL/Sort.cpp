#include<bits/stdc++.h>
using namespace std;

bool comp(pair <int,int> p1,pair <int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //if(p1.second ==  p2.second) return false;

    if(p1.first>p2.first) return true;
    return false;

}

int main(){
    //sort(a,a+n);
    // sort(v.begin(),v.end());
    // sort(a+2,a+4);

    // TO SORT IN DESCENDING ORDER 
    // sort(a, a+n, greater<int>); //greater<int> in built comparator

    pair <int,int> a[]={{1,2},{2,1},{4,1}};

    //Sort in according to the second element---{2,1}{4,1}{1,2}
    //If second element is same, then sort---> yes {2,1} & {4,1}
    //It according to the first element but descending-----> {4,1}{2,1}{1,2}

    sort(a,a+n,comp);   //comp--->Self written comparator hich is a boolean function

    return 0;
}