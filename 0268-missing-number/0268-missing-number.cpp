class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int sum_c = 0 ;

        int sum = n * (n + 1) / 2 ;

        for(int i = 0 ; i< n ; i++){

        sum_c += nums[i];
        }

        int ans = sum - sum_c;

        return ans ;
        
        
    }

   
};