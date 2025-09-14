#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mi=prices[0];
        for(int i=1;i<prices.size();i++){
            mi=min(mi,prices[i]);
            profit=max(profit,prices[i]-mi);
        }
        return profit;
    }
};

int main() {
    Solution obj;
    vector<int> prices = {7,1,5,3,6,4};
    cout << obj.maxProfit(prices) << endl;
    return 0;
}
