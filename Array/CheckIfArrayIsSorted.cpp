#include <bits/stdc++.h>
using namespace std;

bool ifSorted(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

//For rotated array
bool check(vector<int> &nums)
{
    int countDrops = 0; // To count number of drops
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < nums[i - 1])
        {
            countDrops++;
        }
    }

    // Also check the last and first element to account for rotation
    if (nums[n - 1] > nums[0])
    {
        countDrops++;
    }

    return countDrops <= 1;
}

//MERGED LOGIC
bool ifSortedOrRotated(int arr[], int size) {
    int countDrops = 0;  // Count the number of drops (where order breaks)

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            countDrops++;  // Found a drop in sorting order
        }
    }

    // Check the last and first element for rotation case
    if (arr[size - 1] > arr[0]) {
        countDrops++;
    }

    // If there is at most 1 drop, it's either sorted or a rotated sorted array
    return countDrops <= 1;
}

int main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;

    int arr[size];
    cout << "Enter the elements:";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if (ifSorted(arr, size) == true)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is unsorted." << endl;
    }
    return 0;
}