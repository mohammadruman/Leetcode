class Solution {
public:
    bool isPalindrome(int x) {
        int original =x;
        int ans=0;
        if(x<0)return false;
     while(x!=0){
        int digi = x%10;
          if((ans>INT_MAX/10)|| (ans<INT_MIN/10))return 0;
        ans= ans*10+digi;
        x=x/10;
     }
    return ans ==original;  
     
    }
};