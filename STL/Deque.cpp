#include<bits/stdc++.h>
using namespace std;

//<<<<<<<<<<<<<<<------------DEQUE----------->>>>>>

//SHOWDQ FUNCTION
void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main(){

    //DELCARATION
    deque<int>dq;
     //<<<<<<<---------PUSH BACK--------------->>>>>>>>>>>
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);

    showdq(dq);

     cout << "\ndq.size() : " << dq.size(); //SIZE
    cout << "\ndq.max_size() : " << dq.max_size();  //MAX_SIZE
 
    cout << "\ndq.at(2) : " << dq.at(2);    //AT
    cout << "\ndq.front() : " << dq.front();    //FRONT
    cout << "\ndq.back() : " << dq.back();  //BACK
 
    cout << "\ndq.pop_front() : ";  //POP_FRONT
    dq.pop_front();
    showdq(dq);
 
    cout << "\ndq.pop_back() : ";   //POP_FRONT
    dq.pop_back();
    showdq(dq);

    //PRINT
    for(const auto lt: dq){
        cout<<lt<<' ';
    }cout<<endl;
// <<<<<<<<<<<<<<<<<<<<<<<<<<---------------------------- DEQUE PAIR -------------------------------->>>>>>>>>>>>>>>>>
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

    //REST FUNCTIONS ARE SAME AS VECTOR AND LIST



    return 0;
}