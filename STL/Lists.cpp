#include<bits/stdc++.h>
using namespace std;
//dqTS----->>>>>>>>>>>>>MAINTAINED BY DOUBLY LINKED dqT
//push_front is cheaper wrt vectors
int main(){
    deque<int> dq;

    //<<<<<<<---------PUSH BACK--------------->>>>>>>>>>>
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);

    //PRINT
    for(const auto lt: dq){
        cout<<lt<<' ';
    }cout<<endl;

    deque<pair<int,int>> dq2;

    dq2.push_back({3,1});
    dq2.push_back({3,5});
    dq2.emplace_back(3,5);
    dq2.emplace_front(0,0);
    dq2.push_front({0,0});

    //PRINT
    for(const auto lt: dq2){
        cout<<'('<<lt.first<<','<<lt.second<<')'<<" ";
    }cout<<endl;

    //REST FUNCTIONS ARE SAME AS VECTOR

    return 0;
}


//GPT LINK------>>>>>>>
//      |
//      |
//      |
//      |
//     \ /
// https://chatgpt.com/share/66fb189d-4464-8002-a6e9-97a37b9bda24