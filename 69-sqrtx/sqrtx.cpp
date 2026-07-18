class Solution {
public:
    int mySqrt(int x) {
        int ans;
        for(long int i=0; i*i <= x; i++){
            if (i*i < x){
                continue;
            }
            else if(i*i == x){
                ans = i;
                return ans;
            }
            else{
                ans = i - 1;
                return ans;
            }    
        }
        return ans;
    }  
};