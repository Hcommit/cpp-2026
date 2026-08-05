#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return false;

        int original = x;
        long long reverse = 0;

        while (x != 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }

        return original == reverse;
    }
};

int main() {
    Solution obj;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (obj.isPalindrome(num))
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}