#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        return nums[0];
    }
};

int main() {
    vector<int> nums = {3,4,5,1,2};
    Solution obj;
    int ans = obj.findMin(nums);
    cout << ans;
    return 0;
}
