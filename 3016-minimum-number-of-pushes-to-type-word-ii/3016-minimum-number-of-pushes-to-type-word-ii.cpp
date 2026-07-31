class Solution {
public:
    int minimumPushes(string word) {

        vector<int> v(26,0);
        int ans = 0;

        for(char c : word){
            v[c - 'a']++;
        }
        sort(v.begin() , v.end());

        int k = 0;
        int p = 1;

        for(int i = 25 ; i>=0 ; i--){  
            ans += (v[i]* p); 
            if(v[i] >0){
                k++;
            }

            if( k == 8){
                p++ ;
                k=0;
            }
        }
        
        return ans;
    }
};