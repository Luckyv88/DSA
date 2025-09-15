#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = nums[0];
        int currMax = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currMax = max(nums[i], currMax + nums[i]);
            maxSoFar = max(maxSoFar, currMax);
        }

        return maxSoFar;
    }
};

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution s;
    cout << s.maxSubArray(nums);
    return 0;
}
