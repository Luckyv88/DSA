#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        if(s==t)return true;
        return false;
    }
};

int main() {
    Solution obj;
    string s = "anagram", t = "nagaram";
    if(obj.isAnagram(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
