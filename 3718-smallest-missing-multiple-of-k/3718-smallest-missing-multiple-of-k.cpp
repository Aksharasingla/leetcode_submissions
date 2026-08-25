class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_set<int> mp;
        int temp = k;

        for(int i = 0 ; i< nums.size() ; i++){

            mp.insert(nums[i]);

        }

        while( mp.find(k) != mp.end() ){

            k += temp;


        }

return k;
    }
};