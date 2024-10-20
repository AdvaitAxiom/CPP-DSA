#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// <<<<<<<<<<<<<<<<<-------------LAMBDA FUNCTION---------------->>>>>>>>>>>>>>>>>

//Function called
// void printStackWithoutModification(std::stack<int> s) {
//     std::vector<int> temp;

//     // Transfer elements to a temporary vector
//     while (!s.empty()) {
//         temp.push_back(s.top());
//         s.pop();
//     }

//     // Print elements from the temporary vector
//     for (auto it = temp.rbegin(); it != temp.rend(); ++it) {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;
// }

int main() {
    stack<int> myStack;

    // Push elements into the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);


    auto printStackWithoutModification=[](stack<int> s) {
    vector<int> temp;

    // Transfer elements to a temporary vector
    while (!s.empty()) {
        temp.push_back(s.top());
        s.pop();
    }

    // Print elements from the temporary vector
    for (auto it = temp.rbegin(); it != temp.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
};

    // Print the stack without modifying it
    printStackWithoutModification(myStack);
    return 0;
}
