#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                result += tolower(s[i]);
            }
        }
        int n = result.size();
        string t=result;
        int count=0;
        for (int i = n-1; i >= 0; i--) {
            if (result[i] !=t[count]) {
                return false;
            }
            count++;
        }
        return true;
    }
};

int main() {
    Solution obj;
    string s = "A man, a plan, a canal: Panama";
    if (obj.isPalindrome(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
