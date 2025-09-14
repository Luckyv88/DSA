#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0;
        int n1=s.size();
        int n2=t.size();
        if(n1==0 && n2==0) return true;
        for(int i=0; i<n2; i++) {
            if(s[count]==t[i]) {
                count++;
            }
            if(count==n1) return true;
        }
        return false;
    }
};

int main() {
    Solution obj;
    string s = "abc";
    string t = "ahbgdc";
    cout << (obj.isSubsequence(s, t) ? "true" : "false") << endl;
    return 0;
}
