#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    void timesEachElementOccurs(string s) {
        int hash[256] = {0};

        int i;

        for(i = 0; i < s.size(); i++) {
            hash[s[i]]++;
        }

        for(i = 0; i < 256; i++) {
            if(hash[i] > 0) {
                cout << char(i) << " -- " << hash[i] << endl;
            }
        }
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter string: ";
    cin >> s;

    obj.timesEachElementOccurs(s);

    return 0;
}