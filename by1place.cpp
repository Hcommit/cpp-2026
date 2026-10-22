#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return;          // nothing to rotate (also avoids nums[0] on empty vector)

        int temp = nums[0];          // save the first element

        for (int i = 1; i < n; i++) {
            nums[i - 1] = nums[i];   // shift everything left by one
        }

        nums[n - 1] = temp;          // put the first element at the end
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    obj.rotateArrayByOne(nums);

    cout << "Array after left rotation by one: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}