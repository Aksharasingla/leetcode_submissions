class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        sort(a.begin(), a.end());

        int count = 0;
        int end = INT_MIN;

        for(auto &x : a) {
            if(x[0] >= end) {
                end = x[1];
            }
            else {
                count++;
                end = min(end, x[1]);
            }
        }

        return count;
    }
};
