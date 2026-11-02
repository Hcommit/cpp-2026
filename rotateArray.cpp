// 6. Rotate The Array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rotateArray(vector<int>& nums, int k) {
        int n = nums.size();

        if (n == 0) {
            return {};
        }

        k = k % n;
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            result[(i + k) % n] = nums[i];
        }

        return result;
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

    int k;
    cout << "Enter K (number of right rotations)" << endl;
    cin >> k;

    Solution s;
    vector<int> res = s.rotateArray(nums, k);

    cout << "Rotated array is - ";

    for (int i = 0; i < (int)res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}