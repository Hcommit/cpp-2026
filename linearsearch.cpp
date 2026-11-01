// 2. Linear Search
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    int n;
    cout << "Enter number of elements in vector" << endl;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements" << endl;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target to search" << endl;
    cin >> target;

    Solution s;
    int index = s.linearSearch(nums, target);

    if (index == -1) {
        cout << "Target not found" << endl;
    } else {
        cout << "Target found at index - " << index << endl;
    }

    return 0;
}