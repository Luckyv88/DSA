#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j,temp;
        int n=nums.size();
        i=0;
        j=1;
        temp=0;
        while(j<n)
        {
            if(n==1)
            {
                break;
            }
            else if(nums[i]==0 & nums[j]!=0)
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;  
                i++;
                j++;   
            }
            else if(nums[i]!=0 & nums[j]==0)
            {
                i++;
                j++;
            }
            else if(nums[i]!=0 & nums[j]!=0)
            {
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    }
};

int main() {
    Solution obj;
    vector<int> nums = {0,1,0,3,12};
    obj.moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
