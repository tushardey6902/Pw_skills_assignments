#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1 = m - 1;
    int p2 = n - 1;
    int p = m + n - 1;

    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[p] = nums1[p1];
            p1--;
        } else {
            nums1[p] = nums2[p2];
            p2--;
        }
        p--;
    }

    while (p2 >= 0) {
        nums1[p] = nums2[p2];
        p--;
        p2--;
    }
}

int main() {
    int m, n;

    // Get the size of nums1 and nums2
    cout << "Enter the size of nums1: ";
    cin >> m;
    cout << "Enter the size of nums2: ";
    cin >> n;

    vector<int> nums1(m + n);
    vector<int> nums2(n);

    // Get the elements of nums1
    cout << "Enter the elements of nums1 (in non-decreasing order): ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    // Get the elements of nums2
    cout << "Enter the elements of nums2 (in non-decreasing order): ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    // Merge the arrays
    merge(nums1, m, nums2, n);

    // Print the merged array
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
