#include <iostream>
#include <set>
using namespace std;

// Custom comparator (predicate) for descending order
struct DescendingOrder {
    bool operator()(int a, int b) const {
        return a > b; // Descending
    }
};

int main() {
    // Create a set with custom comparator
    set<int, DescendingOrder> mySet;

    // Insert some values
    mySet.insert(5);
    mySet.insert(1);
    mySet.insert(8);
    mySet.insert(3);

    // Print values (should be in descending order)
    for (int x : mySet) {
        cout << x << " ";
    }

    return 0;
}
