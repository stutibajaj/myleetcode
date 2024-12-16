class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        int max = INT_MAX;
        int min = INT_MIN;
        while(x!=0){
            int digit = x%10;
            if((ans>max/10) || (ans<min/10)){
                return 0;
            }
            ans = (ans*10)+digit;
            x=x/10;

        }
        return ans;
        
    }
};