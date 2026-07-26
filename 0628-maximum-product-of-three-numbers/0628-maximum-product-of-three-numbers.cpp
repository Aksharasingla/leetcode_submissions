class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int first = INT_MIN , sec = INT_MIN , thrd = INT_MIN;
        int n1 = INT_MAX , n2 = INT_MAX;

        for( int i : nums ){

            if(i >= first){
                thrd = sec;
                sec = first;
                first = i;
            }
            else if(i >= sec){
                thrd = sec;
                sec = i;
            }
            else if( i > thrd){
                thrd = i;
            }

            if (i <= n1) {
                n2 = n1;
                n1 = i;
            }
             else if (i < n2) {
                n2 = i;
            }
        }

        return max(( first * sec * thrd), (n1 * n2 * first));
        
    }
};