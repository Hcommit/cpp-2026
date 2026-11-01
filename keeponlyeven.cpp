// Keep Only Even Numbers
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> evenArray(vector<int>& nums) {
        vector<int> result;

        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                result.push_back(nums[i]);
            }
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

    Solution s;
    vector<int> res = s.evenArray(nums);

    cout << "Array with only even numbers is - ";

    for (int i = 0; i < (int)res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}