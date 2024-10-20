#include<bits/stdc++.h>
using namespace std;
// <<<<<<<<<<<<<<------------STACK----------------->>>>>>>>>>

//********THE LAMBDA FUNCTION OF DUMMYPRINT IS EXPLAINED IN StackExp.cpp****************
void DummyPrint(stack<int> s){

    vector<int> v;

    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }

    for(const auto lt: v){
        cout<< lt<<" ";
    }cout<<endl;
}

int main(){

    //Integer Stack------------>>>>>>>
    stack<int> st;

    st.push(1); //push****
    st.push(2);
    st.push(3);
    st.push(4);

    st.emplace(5);  //EMPLACE***

    cout<<st.top()<<endl; //TOP****

    // cout<<st[2]; //INVALID

    st.pop();// POP****

    cout<<st.size()<<endl;    //SIZE****

    cout<<st.empty()<<endl;   //EMPTY****

    stack<int> sta,sta1;
    sta.push(1);
    sta.push(2);
    sta1.push(3);
    sta1.push(4);

    sta.swap(sta1);

    // for(auto li:st){
    //     cout
    // }        //ITERABLE CAN'T BE USED HERE 



    //stack of pair---------------->>>>>>>>>

    stack<pair<int,int>> st2;

    st2.push({1,2});
    st2.emplace(3,4);

    //Using DummyPrint before poping the elements from the main stack------------>>>>>>>>>>>>

    DummyPrint(st);

    // Printing stack elements by popping them------------>>>>>>>>>>

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    //Printing stack elements without destroying the original stack-------------------->>>>>>>>>>>>>

    DummyPrint(st);     //As we can see in the previous while loop we have poped all the element so this fucntion is not screening anything because the stack is empty


    return 0;
}


//GPT LINK------>>>>>>>
//      |
//      |
//      |
//      |
//     \ /
//https://chatgpt.com/share/66fb189d-4464-8002-a6e9-97a37b9bda24