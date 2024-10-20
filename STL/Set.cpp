#include<bits/stdc++.h>
using namespace std;
//<<<<<<<<<<<<<<<<<-----------SET----------->>>>>>>>>>
//Unique
//Sorted
//Store in sorted order, reverse of Priority Queue(MinHeap)

int main(){
    set<int> st;

    // Insert-------------->>>>>>>>
    st.insert(1);   //1
    st.emplace(2);  //1,2
    st.insert(2);   //1,2
    st.insert(4);   //1,2,4
    st.insert(3);   //1,2,3,4

    //begin(), end(), rbegin(), rend(), size(), empty(), swap() are used as same

    //Find----------------->>>>>>>>>>

    auto it1=st.find(2);
    auto it2=st.find(4);

    //Print the result
    if (it != st.end()) {
        cout << "Element found: " << *it <<endl;  // dereference to print the element
    } else {
        cout << "Element not found" <<endl;

    }

    //Erase----------------->>>>>>>>>>

    st.erase(5);//O(log n)
    //Here can parse the iterator to delete the elemnt of that iterated index

    auto it=st.erase(it1, it2); //after erase {1,4}

    //Count----------------->>>>>>>>>>>>

    int cnt=st.count(1);// Can be 0 or 1----> 1: present && 0: absent
    cout<<cnt<<endl;

    //Lower Bound and Upper Bound--------------->>>>>>>>>>>>>>>>>

    //Lower bound(2) ---->If st = {1, 2, 3, 4, 5}, then st.lower_bound(2) will return an iterator pointing to the first occurance of element 2, because 2 is the first element that is not less than 2.
    //In this example, the set st contains {1, 3, 4, 5} and does not contain 2. When you call st.lower_bound(2), the function will return an iterator to 3, which is the first element that is not less than 2.
    auto lb = st.lower_bound(2);

    // upper_bound(3) returns the first element strictly greater than 3.(Even if 3 not exists)
    auto ub = st.upper_bound(3);


    //print
    if (lb != st.end()) {
        std::cout << "Lower bound for 2 is: " << *lb << std::endl;
    } else {
        std::cout << "No element not less than 2." << std::endl;
    }


    //Q1. Check if X exists in the sorted array or not?
    //A[]={1,4,5,8,9}

    // bool res = binary_search(a,a+n,3);
    //a-->>points 1
    //a+n--->>last element
    //find 3

    // bool res = binary_search(a, a+n, 4);


    //Sorted Descending order(Priority Queue)
     set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);

    for (auto i : s1) {
        cout << i << ' ';
    }

    

    return 0;
}