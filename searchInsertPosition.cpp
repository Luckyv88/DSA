#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(nums[n-1]<target) 
          return n;;

        for(int i=0; i<n; i++)
        {
            if(target==nums[i]) return i;
            if(target<nums[i])  return i;
        }  

        return 0;
    }
};

int main() {
    vector<int> nums = {1,3,5,6};
    int target = 5;
    Solution s;
    cout << s.searchInsert(nums, target);
    return 0;
}
