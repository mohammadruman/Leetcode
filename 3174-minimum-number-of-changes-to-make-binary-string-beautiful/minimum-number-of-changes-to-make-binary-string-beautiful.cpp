class Solution {
public:
    int minChanges(string s) {
        int n = s.length();
        int count =0;
        int change=0;
        char ch = s[0];
        for(int i =0 ; i < n ; i++){
            if(s[i]==ch){
                count++;
                continue;
            }
            //curr char is not equal so 
            if(count%2==0){
                count =1; //start new substring

            }
            else{
                change++;
                count =0;

            }
            ch = s[i]; //update the new char
        }
        return change;
    }
};