#include<bits/stdc++.h>
using namespace std;

int AssignCookies(vector <int> cookies, vector <int> children){
    int c_size = cookies.size();
    int ch_size = children.size();
    sort(cookies.begin(), cookies.end());
    sort(children.begin(), children.end());
    int i = 0, j = 0;

    while(i<c_size && j<ch_size){
        if(cookies[i]>= children[j]){
            i++;    // cookie can satisfy this child
            j++;    // move to next child
        }else{
            i++;    // cookie too small, try next cookie
        }
    }
    return j;   // return the number of satisfied children
}


int main(){
    vector <int> cookies= {4,2,1,2,1,3};
    vector <int> children = {1,5,3,3,4};

    int satisfied = AssignCookies(cookies,children);
    cout << "Number of satisfied children: " << satisfied << endl;
    return 0;
}