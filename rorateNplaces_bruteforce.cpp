#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int d) {
        int n = nums.size();
        if (n <= 1) return;
        d = d % n;                          // skip useless full rotations

        for (int r = 0; r < d; r++) {       // repeat d times
            int temp = nums[0];             // save first element

            for (int i = 1; i < n; i++) {
                nums[i - 1] = nums[i];      // shift left by one
            }

            nums[n - 1] = temp;             // put first element at the end
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