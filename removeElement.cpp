#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int temp = 0, i = 0, j = 1;
        int n = nums.size();

        if (n == 1 && nums[0] != val) {
            return 1;
        }
        if (n == 0) {
            return 0;
        }

        while (j < n) {
            if (nums[i] == val && nums[j] != val) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j++;
            }
            else if (nums[i] != val && nums[j] == val) {
                i++;
                j++;
            }
            else if (nums[i] != val && nums[j] != val) {
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        if (nums[i] != val) return i + 1;
        return i;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3,2,2,3,4,2};
    int val = 3;
    int len = obj.removeElement(nums, val);
    cout << "New length: " << len << endl;
    cout << "Array after removing " << val << ": ";
    for (int k = 0; k < len; k++) {
        cout << nums[k] << " ";
    }
    cout << endl;
    return 0;
}
