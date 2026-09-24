// no of element in each using hash

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void timesEachElementOccurs(vector<int>& nums) {
        int hash[10001] = {0};

        int i;

        for(i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        for(i = 0; i < 10001; i++) {
            if(hash[i] > 0) {
                cout << i << " -- " << hash[i] << endl;
            }
        }
    }
};

int main() {
    Solution s;

    int n;
    cout << "Enter no of elements in vector: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout<<endl;

    s.timesEachElementOccurs(nums);

    return 0;
}