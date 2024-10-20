#include<bits/stdc++.h>
using namespace std;
// <<<<<<<<<<----------PRIORITY QUEUE----------->>>>>>>>>>
//TREE DATA STRUCTURE IS USED
int main(){
priority_queue<int>pq;      //Creates Max Heap----------->>>>>>>>>>

pq.push(5);
pq.push(6);
pq.emplace(4);

cout<<pq.top()<<endl;

pq.pop();

cout<<pq.top()<<endl;

//Creates Min Heap------------------>>>>>>>>>>>>>>>>>>>>
priority_queue<int, vector<int>, greater<int>>pq1;
pq1.push(5);
pq1.push(6);
pq1.emplace(4);

cout<<pq1.top()<<endl;



//size(), empty(),swap()
    return 0;
}