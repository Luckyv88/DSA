#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};   // ✅ fixed
    int target = 9;
    vector<int> dupli = nums;  
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int i = 0, j = n - 1;
    int num1 = -1, num2 = -1;

    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum == target) {
            num1 = nums[i];
            num2 = nums[j];
            break;
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }

    vector<int> ans;
    for (int k = 0; k < n; k++) {
        if (dupli[k] == num1 || dupli[k] == num2) {
            ans.push_back(k);
            if (ans.size() == 2) break;
        }
    }

    cout << "Indices: ";
    for (int idx : ans) cout << idx << " ";   // ✅ fixed
    cout << endl;

    return 0;
}
