class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        int temp = k;

        for(int i = 0 ; i< nums.size() ; i++){

            mp[nums[i]++];

        }
        int i = 0;

        for( auto i : mp){

        if(mp.find(k) != mp.end()){

            k += temp;
            
        }

        }

return k;
    }
};