#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        return nums;
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

    Solution s;
    s.bubbleSort(nums);

    cout << "Sorted array is - ";

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}