class Solution {
public:
    string addStrings(string num1, string num2) {
       int n = num1.size();
       int m = num2.size();
       if(n!=m){
        while(n<m){
            num1= '0'+num1;
            n++;
        }
        while(n>m){
            num2='0'+num2;
            m++;
        }
       }
       int i = n-1;
       int j = m-1;
       string ans = "";
       int carry =0;
       while(i>=0 && j>=0){
        int digi1 = num1[i]-'0';
        int digi2= num2[j]-'0';
        int sum = digi1+digi2+carry;
        carry = sum/10;
        int digi = sum%10;
        
        //ans update
        ans=char(digi+'0')+ans;    
     
        i--;
        j--;
       }
       if(carry>0){
        ans=char(carry+'0')+ans;
       }
       return ans;
    }
};