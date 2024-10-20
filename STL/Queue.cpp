#include<bits/stdc++.h>
using namespace std;

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout <<g.front()<<" ";
        g.pop();
    }
    cout << '\n';
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back()+=5;    //Last element+ 5

    q.front()+=4;

    cout<<q.front()<<endl;    //FRONT

    q.pop();  //POP

    cout<<q.front()<<endl;    //FRONT
    cout<<q.back()<<endl;     //BACK

    showq(q);
    return 0;
}