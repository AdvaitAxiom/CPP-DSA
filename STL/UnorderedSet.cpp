#include<bits/stdc++.h>
using namespace std;
// <<<<<<<------------UNORDERED SET------------->>>>>>>>>
//SIMILAR TO SET
//STORE IN UNORDERED FASHION
int main(){
    unordered_set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(15);
    st.insert(1);   //STORE IN RANDOM ORDER

    for(const auto p:st){
        cout<<p<<endl;
    }
    return 0;
}