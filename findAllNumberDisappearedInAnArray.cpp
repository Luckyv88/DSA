#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> outt;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            outt.insert(nums[i]);
        }
        vector<int> arr;
        for (int i = 1; i <= n; i++) {
            if (!outt.count(i)) {
                arr.push_back(i);
            }
        }
        return arr;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = obj.findDisappearedNumbers(nums);
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
