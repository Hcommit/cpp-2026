// 5. Reverse An Array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n / 2; i++) {
            swap(nums[i], nums[n - i - 1]);
        }
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
    s.reverseArray(nums);

    cout << "Reversed array is - ";

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}