#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1;
        int n = nums.size();
        while (j < n) {
            if (nums[i] < nums[j]) {
                nums[i + 1] = nums[j];
                i = i + 1;
                j = j + 1;
            } else {
                j++;
            }
        }
        return i + 1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,1,2,2,3,3,4};
    int len = obj.removeDuplicates(nums);
    cout << "New length: " << len << endl;
    cout << "Array after removing duplicates: ";
    for (int k = 0; k < len; k++) {
        cout << nums[k] << " ";
    }
    cout << endl;
    return 0;
}
