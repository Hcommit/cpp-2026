/* map is useful when we want to store an element along with 
its frequency without knowing the possible range of the elements beforehand. */

#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

class Solution {
public:
    void timesEachElementOccurs(vector<int>& nums) {
        map<int, int> mp;// memory is allocated dynamically as required
        // stores only the elements that occur

        //unordered_map<int, int> mp;


        // map ---> op is ordered ie in assesning order
        // unorderedmap ---> op is ordered ie in assesning order

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++; 
        }

        for(auto x : mp) {
            cout << x.first << " -- " << x.second << endl; 
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
        cin >> nums[i];//[ 1 , 2 , 3 , 2456] ---> only 4 spaces will be taken not 2456
    }

    cout << endl;

    s.timesEachElementOccurs(nums);

    return 0;
}