#include<bits/stdc++.h>
using namespace std;
// <<<<<<<<<<<-------------MultiSet-------------------------->>>>>>>>>>>
//1.SORTED
//2. NOT UNIQUE
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);   //{1,1,1,1,1}

    // Erase-------->>>>>>>>>>>
    // ms.erase(1); //ms.erase(element)   //Will Del all 1s

    // ms.erase(ms.find(1)); //ms.erase(address)  //Will del the iterator of the first 1

    // ms.erase(ms.find(1), ms.find(1)+2); //DEPRICATED
            // |
            // |
            // \/
    auto it1 = ms.find(1); // First iterator (start of range)
    auto it2 = std::next(it1, 2); // Second iterator (2 elements ahead)
    ms.erase(it1, it2);

    //Count--------->>>>>>>>>>>
    int cnt=ms.count(1);
    cout<<cnt;  //0
    return 0;
}