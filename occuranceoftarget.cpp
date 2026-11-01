// 3. Count Occurrences Of A Target I
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countOccurrences(vector<int>& nums, int target) {
        int count = 0;

        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] == target) {
                count++;
            }
        }

        return count;
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
    cout << "Enter target to count" << endl;
    cin >> target;

    Solution s;
    int count = s.countOccurrences(nums, target);

    cout << "Target occurs " << count << " times" << endl;

    return 0;
}