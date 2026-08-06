class Solution {
public:

    int get_product(int n){

        int product = 1;

        while(n > 0){
            product *= (n%10);
            n /=10;
            
        }
        return product;


    }

    int smallestNumber(int n, int t) {

int product = get_product(n);
        while( product % t != 0){
            n++ ;
            product = get_product(n);
        }
      

        
       return n ; 
    }
};