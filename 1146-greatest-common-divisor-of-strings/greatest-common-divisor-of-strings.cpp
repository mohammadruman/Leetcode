class Solution {
public:
    int gcd(int a , int b){
        while(a%b!=0){
            int rem = a%b;
            a=b;
            b =rem;
        }
        return b;
    }
    string gcdOfStrings(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
       if(str1+str2!=str2+str1){
        return "";
       }
       else{
        return str1.substr(0,gcd(n,m));
       }
    }

};