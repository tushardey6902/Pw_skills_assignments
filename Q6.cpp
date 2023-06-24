#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> numSet;

    for (int num : nums) {
        // If the element already exists in the set, it's a duplicate
        if (numSet.count(num) > 0) {
            return true;
        }

        // Insert the element into the set
        numSet.insert(num);
    }

    return false;
}

int main() {
    int n;

    // Get the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    // Get the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Check if any value appears at least twice
    bool result = containsDuplicate(nums);

    // Print the result
    if (result) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array does not contain duplicates." << endl;
    }

    return 0;
}
