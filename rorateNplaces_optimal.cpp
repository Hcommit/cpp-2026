#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int d) {
        int n = nums.size();
        if (n <= 1) return;
        d = d % n;
        if (d == 0) return;

        vector<int> temp(nums.begin(), nums.begin() + d);   // save first d elements

        for (int i = d; i < n; i++) {
            nums[i - d] = nums[i];                          // shift left by d
        }

        for (int i = n - d; i < n; i++) {
            nums[i] = temp[i - (n - d)];                    // put saved elements at the end
        }
    }
};

int main() {
    int n, d;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter d: ";
    cin >> d;

    Solution obj;
    obj.rotateArray(nums, d);

    cout << "Array after left rotation by " << d << ": ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}