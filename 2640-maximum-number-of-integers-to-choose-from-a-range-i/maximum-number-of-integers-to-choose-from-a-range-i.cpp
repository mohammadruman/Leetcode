class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
   int count=0;
   int ans=0;
        set<int>st;
        for(int i =0; i < banned.size();i++){
            st.insert(banned[i]);
        }
            for(int i =1; i<=n ;i++){
        if(st.find(i)==st.end() && ans+i<=maxSum){
            ans+=i;
             count++;
        }
       }
        return count;
    }
};