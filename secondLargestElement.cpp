#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int secondlargest(vector<int>& nums) {
        int largest = INT_MIN;
        int second = INT_MIN;

        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > largest) {
                second = largest;
                largest = nums[i];
            } else if (nums[i] > second && nums[i] != largest) {
                second = nums[i];
            }
        }
        return (second == INT_MIN) ? -1 : second;
    }
};

int main() {
    int n;

    cout << "Enter size of array - ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements - " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.secondlargest(nums);

    if (result == -1)
        cout << "No second largest element exists" << endl;
    else
        cout << "Second largest element: " << result << endl;

    return 0;
}