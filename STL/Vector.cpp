#include<bits/stdc++.h>
using namespace std;
//VECTORS------------>>>>>>>>>MAINTAINED BY SINGLY LINKED dqT
//SO insert() is costly
int main(){

//     The main difference between `emplace_back` and `push_back` in C++ lies in how they handle the insertion of elements into a container like `std::vector`.

// ### 1. **`push_back`**:
// - **Usage**: Adds an element to the end of the container.
// - **Behavior**: When you use `push_back`, the element is **copied** or **moved** into the container. This means that you must pass an already constructed object to `push_back`.
  
//    ```cpp
//    std::vector<std::pair<int, int>> vec;
//    vec.push_back(std::make_pair(1, 2));  // Need to create the pair first
//    ```

// - **Disadvantage**: If the object passed is not a temporary (rvalue), it will incur a copy/move operation, which can be inefficient for complex objects.

// ### 2. **`emplace_back`**:
// - **Usage**: Constructs an element **in place** at the end of the container.
// - **Behavior**: With `emplace_back`, you pass the arguments that will be used to construct the element directly inside the container. It avoids the overhead of constructing a temporary object and then copying or moving it.

//    ```cpp
//    std::vector<std::pair<int, int>> vec;
//    vec.emplace_back(1, 2);  // Constructs the pair directly in place
//    ```

// - **Advantage**: More efficient for complex types because it avoids the creation of a temporary object. It constructs the element directly inside the container.

// ### Example to illustrate the difference:

// ```cpp
// #include <iostream>
// #include <vector>
// #include <string>

// class MyClass {
// public:
//     int a;
//     std::string b;
    
//     MyClass(int a, std::string b) : a(a), b(b) {
//         std::cout << "Constructor called\n";
//     }
//     MyClass(const MyClass &other) {
//         std::cout << "Copy constructor called\n";
//     }
// };

// int main() {
//     std::vector<MyClass> vec;
    
//     // Using push_back
//     MyClass obj(10, "Hello");
//     vec.push_back(obj);  // Copy constructor will be called
    
//     // Using emplace_back
//     vec.emplace_back(20, "World");  // Constructor called directly in place
    
//     return 0;
// }
// ```

// ### Output:
// ```
// Constructor called
// Copy constructor called
// Constructor called
// ```

// - **`push_back`** required creating the object first, which involved invoking the copy constructor.
// - **`emplace_back`** constructed the object directly inside the vector, avoiding the copy.

// ### Summary:
// - **`push_back`**: Requires an already constructed object and may involve copy/move overhead.
// - **`emplace_back`**: Constructs the object directly in place, avoiding unnecessary temporary objects and overhead. It is particularly useful for complex types or types that are expensive to copy.

    //VECTOR DELCARATION--------------------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);// Here push and emplace will work similar
    //Size
   cout<<v.size()<<endl;

   //Print the vector
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
    cout<<endl;



    //VECTOR PAIR DECLARATION-------------------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>

    vector<pair<int, int>>vec;
    vec.push_back({1,2});   //Here before push we have to create object
    vec.emplace_back(1,2);  //For emplace we don't need to create object, can send directly
    //Size
   cout<<vec.size()<<endl;
   //Print Vector pair value
   for (const auto &p : vec) {  //The element (p) is a constant reference, meaning it cannot be modified inside the loop. Using const ensures that the elements in the vector are not changed by mistake.
        cout << "(" << p.first << ", " << p.second << ")" << std::endl;
    }



    //vector with size 5 with value 100---------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>

    vector<int> vp(5,100);
    //Size
    cout<<vp.size()<<endl;
    //Print the value
    for(int i=0;i<vp.size();i++){
        cout<<vp[i]<<" ";
    }cout<<endl;

    //Vector with size 5 with random garbage value---------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>

    vector<int> vpp(5);// values can be 0 or garbage depending on compiler
    //Size
    cout<<vpp.size()<<endl;
    //Print the value
    for(int i=0;i<vpp.size();i++){
        cout<<vpp[i]<<" ";
    }cout<<endl;
    //Adding element
     vpp.push_back(2);
    vpp.emplace_back(3);
    //Size
    cout<<vpp.size()<<endl;
    //Printing value
    for(int i=0;i<vpp.size();i++){
        cout<<vpp [i]<<" ";
    }cout<<endl;


    //Copy Vector---------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>
    
    vector<int>v2(vp);
    //Print value
    for(int i=0;i<vpp.size();i++){
        cout<<vpp[i]<<" ";
    }cout<<endl;




//<<<<<<<<----------------------Acessing Vectors With Iterators---------------------------------->>>>>>>>>>>>>>>>>>>>>>>
//1.v.begin()
//2.v.end()
//3.v.rend()
//4.v.rbegin()


    //Acessing Vector
    vector<int> ex={1,2,3,4};

//1.----->v.begin()
    vector<int>::iterator it =ex.begin();    //  Here ex.begin() actually holds the starting address of the vector array not the first element
    //it++;
    cout<<"Output of begin(): "<<*(it)<<endl;

//2.------>v.end()
    vector<int>::iterator ed=ex.end();  // ex.end() holds the address just after the last element of the vector array
    ed--;       //So to print the last array we need to take back by 1
    cout<<"Output of end(): "<<*(ed)<<endl;


//3.------>v.rend()
    vector<int>::reverse_iterator lt= ex.rend(); //ex.rend() takes the array reverse and does same job ex.begin();
    lt--;//iterates reverse order and it goes one step ahead of the last element index 
    cout<<"Output of rend(): "<<*(lt)<<endl;

//4.------>v.rbegin()
    vector<int>::reverse_iterator ft = ex.rbegin();// it works similer like v.end but it holds the value of the last element, doesn't go ahead a step like it
    cout<<"Output of rbegin(): "<<*(ft)<<endl;
    ft++;
    cout<<"Next vaule: "<<*(ft)<<endl;

    //Experiment with loop

    // Use reverse_iterator to iterate from the last element to the first
    for (vector<int>::reverse_iterator ht = ex.rbegin(); ht != ex.rend(); ++ht) {
        cout << *ht << " ";  // Dereference the reverse iterator to get the value
    }
    cout << endl;


     // Start with reverse iterator at rbegin
    auto pt = ex.rbegin();  // auto deduces type as vector<int>::reverse_iterator && pt is a vector iterator

    // Print elements until we reach the end of the vector (i.e., until we've iterated all elements in reverse)
    while (pt != ex.rend()) {
        cout << *pt << " ";  // Dereference the reverse iterator to get the value
        ++pt;  // Move to the next element in reverse order
    }cout<<endl;


    //Print with for-each loop
    for(auto it: ex){
        cout<<it<<" ";
    }
    cout << endl;  // To print a new line at the end

//<<<<<---------------------------------- ERASING VECTOR ----------------------------------->>>>>>>>.
    //{1,2,3,4}

    //Deleteing A PARTICULAR INDEX VALUE
    ex.erase(ex.begin()+1);//{1,3,4}
    for(auto print:ex){
        cout<<print<<" ";
    }cout<<endl;

    //new vector array
    vector<int>ex2={1,2,3,4,5,6,7,8,9};


    //DELETING A RANGE 

    // erase(start,end)-------> END MEANS ADDRESS AFTER AN ELEMENT
    ex2.erase(ex2.begin()+2,ex2.end()-1);//Here end-1 will de the 8 because end goes  after an element

    for(auto cf:ex2){
        cout<<cf<<" ";
    }cout<<endl<<endl;
    
    
    //<<<<<<<<<-----------------------------------INSERTING AN ELEMENT-------------------------------------->>>>>>>>>>>>>>>>>>>>>
    
    vector<int> ex3={1,2,3,4,5};
    ex3.insert(ex3.begin()+1,40);//ex3.insert(position,value)

    for(auto edf:ex3){
        cout<<edf<<" ";
    }cout<<endl;


    //<<<<<<<<<<<<<------------------------------INSERTING MULTIPLE ELEMENTS-------------------------------->>>>>>>>>>>>>>>>>

    ex3.insert(ex3.begin()+1,2,3); //Only 2 values at a time we can insert by this method
    // ex3.insert(ex3.begin()+1,2,3,4);//Error will generate because of number of argument
    ex3.insert(ex3.begin()+1,{2,3,4});  //This will work because we are taking inputs as an obejct
    ex3.insert(ex3.begin()+2,{5,6,7});
    
    //Print
    for(const auto rt:ex3){ 
        cout<<rt<<" ";
    }cout<<endl;
    

    //<<<<<<<<<<<<<<<<<<<<<<<<-------------------------------INSERT MULTIPLE ELEMENT BY VECTOR----------------------------------------->>>>>>>>>>>>>>>>>>>>

    vector<int> copy={4,5};
    ex3.insert(ex3.end(),copy.begin(),copy.end());

    for(const auto rt:ex3){
        cout<<rt<<" ";
    }cout<<endl<<ex3.size()<<endl;


    //<<<<<<<<<<<<<<<<<<<<<<<<-------------------------------FOR EACH LOOP ON ARRAY----------------------------------------->>>>>>>>>>>>>>>>>>>>

    int arr[5]={1,2,3,45,4};

    for(const auto &arrayr:arr){
        cout<<arrayr<<" ";
        // arrayr++;  //Concept of lvalue and rvalue     
    }cout<<endl;
    
    
    //<<<<<<<<<<<<<<<<<<<<<<<<------------------------------- POP BACK ----------------------------------------->>>>>>>>>>>>>>>>>>>>
    
    vector<int> we={1,2,3,4};
    we.pop_back();
    
    for(const auto lt:we){
        cout<<lt<<" ";
    }cout<<endl;
    
    
    //<<<<<<<<<<<<<<<<<<<<<<<<------------------------------- SWAP , CLEAR AND EMPTY----------------------------------------->>>>>>>>>>>>>>>>>>>>

    vector<int> vector1={1,2,3};
    vector<int> vector2={4,5,6};
    // vector<char> vector2={'a','b'}; //Can't swap because type difference

    vector1.swap(vector2);      //Swap

    vector2.clear();        //CLEAR

    for(const auto lt: vector1){
        cout<<lt<<" ";
    }cout<<endl;

    for(const auto lt: vector2){
        cout<<lt<<" ";
    }cout<<endl;

   cout<< vector1.front()<<endl;
    cout<< vector1.back();


    //v.empty()
    if(vector1.empty()){
        cout<<"\nVector1 is empty";
    }else{
        cout<<"\nVector1 is not empty";
    }
    
    return 0;
}

//vec.back()----> to access the last element of the vector 
//vector<int> vec = {10, 20, 30, 40};

// int lastElement = vec.back();  // gets the last element


//GPT LINK------>>>>>>>
//      |
//      |
//      |
//      |
//     \ /
//      https://chatgpt.com/share/66f86119-6b08-8002-952e-571329f43a73




//L-VALUE AND R-VALUE REFERENCES WITH MOVE SEMANTICS-------------------->>>>>>>>>>
//      |
//      |
//      |
//      |
//     \ /
//      https://chatgpt.com/share/6714d7e1-ea10-8002-9deb-1b97171e0ba3


//TYPES OF VECTOR DECLRATION AND CONVERTING ARRAY TO VECTOR-------------------->>>>>>>>>>
//      |
//      |
//      |
//      |
//     \ /
//     https://chatgpt.com/share/67151469-9970-8002-95b8-5dc834157d8f