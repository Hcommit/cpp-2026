#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            int min = i;

            for (int j = i ; j <= n-1; j++) {//j < n also 
                if (nums[j] < nums[min]) {
                    min = j;
                }
            }

            swap(nums[i], nums[min]);
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
    s.selectionSort(nums);

    cout << "Sorted array is - ";

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}