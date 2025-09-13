#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set> 
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for (int val : nums) {
            if (mp.count(val)) {
                return true;
            }
            mp.insert(val);
        }
        return false; 
    }
};

int main() {
    Solution s;

    vector<int> nums = {1, 2, 3, 4, 5, 2};

    if (s.containsDuplicate(nums)) {
        cout << "Contains duplicate" << endl;
    } else {
        cout << "No duplicate" << endl;
    }

    return 0;
}
