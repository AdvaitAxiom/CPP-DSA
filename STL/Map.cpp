#include<bits/stdc++.h>
using namespace std;
// <<<<<<<<<----------MAP-------------->>>>>>>>>>
//Key-Value Pair
//key will always be unique and in sorted order
//Key can be of any data type

int main(){

    map<int, int> mpp;  //map <key, value> mpp
    map< int, pair<int, int>> mpp1; //
    map< pair<int, int>, int> mpp2;

    mpp[1]=2;   //in mpp store the value 2 wherre the key 1
    mpp.emplace(3,1);   //Key=3, value=1
    mpp.insert({2,4});  ///Key = 2, value=4
    mpp.insert({3,4});  ///Key = 3, value=4 IT WILL NOT BE ADDED BECAUSE DUPLICATE KEY

    mpp2[{2,3}]=10;

    // Display---------------->>>>>>>>>>

    for(auto lt:mpp){
        cout<<lt.first<<" "<<lt.second<<" "<<endl;
    }

    cout<<mpp[2]<<endl;
    cout<<mpp2[{2,3}];

    // FIND--------------->>>>>>>>>>>>>
    auto lt= mpp.find(3);
    // cout<<*(lt).second;
    cout<<lt->second;
    return 0;
}