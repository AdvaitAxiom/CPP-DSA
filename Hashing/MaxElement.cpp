#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    // Initialize the map with some key-value pairs
    map<int, int> mpp = {
        {1, 3},  // Key: 1, Value (Frequency): 3
        {2, 5},  // Key: 2, Value (Frequency): 5
        {3, 2},  // Key: 3, Value (Frequency): 2
        {4, 2}   // Key: 4, Value (Frequency): 5
    };

    // Variable to store the maximum frequency
    int max_frequency = 0;

    // Iterate through the map to find the maximum frequency
    for (const auto& pair : mpp) {
        max_frequency = max(max_frequency, pair.second);
    }

    // Output the maximum frequency
    cout << "Maximum frequency: " << max_frequency << endl;

    return 0;
}
