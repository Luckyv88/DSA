#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
   
        for(int i=0; i<=rowIndex; i++)
        {
            vector<int> row(i+1,1);
            for(int j=1; j<i; j++)
            {
                row[j]=ans[i-1][j]+ans[i-1][j-1];
                
            }
            ans.push_back(row);
        }
        return ans[rowIndex];
    }
};

int main() {
    Solution s;
    int rowIndex=3;
   
    vector<int> result = s.getRow(rowIndex);
    for(int x : result) {
        cout << x << " ";
    }
    return 0;
}
