#include <bits/stdc++.h>
using namespace std;

class NumArray {
public:
   vector<int> arr;
    NumArray(vector<int>& nums) {
        arr.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {
            arr.push_back(arr[i-1]+nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        if( left==0) return arr[right];
        return arr[right]-arr[left-1];
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};  
    NumArray obj(nums);

    cout << obj.sumRange(0, 2) << endl;  
    cout << obj.sumRange(2, 5) << endl;  
    cout << obj.sumRange(0, 5) << endl;  

    return 0;
}
