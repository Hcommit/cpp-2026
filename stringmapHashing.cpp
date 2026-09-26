#include<iostream>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    void timesEachCharacterOccurs(string& s) {
        map<char, int> mp;

        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        for(auto x : mp) {
            cout << x.first << " -- " << x.second << endl;
        }
    }
};

int main() {
    Solution s;

    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << endl;

    s.timesEachCharacterOccurs(str);

    return 0;
}