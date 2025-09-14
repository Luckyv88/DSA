#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max=nums[0], count=1;
        for(int i=1; i<nums.size(); i++) {
            if(max==nums[i]) count++;
            else count--;
            if(count==0) {
                max=nums[i];
                count=1;
            }
        }
        return max;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << obj.majorityElement(nums) << endl;
    return 0;
}
