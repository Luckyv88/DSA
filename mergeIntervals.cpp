#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     vector<vector<int>> result;
     int start,end;
     if(intervals.size()==0) return intervals;

     sort(intervals.begin(),intervals.end());
     start=intervals[0][0];   
     end=intervals[0][1];

     for(int i=1;i<intervals.size();i++)
     {
        if(end>=intervals[i][0])
        {
            end=max(end,intervals[i][1]);
        }
        else{
            result.push_back({start,end});
            start=intervals[i][0];
            end=intervals[i][1];

        }
     }
        result.push_back({start, end});
     return result;
    }
};

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    Solution obj;
    vector<vector<int>> ans = obj.merge(intervals);

    for(auto &v : ans) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
    return 0;
}
