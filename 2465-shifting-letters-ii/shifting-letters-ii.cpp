class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
       int n = s.length();
        vector<int> ans(n, 0);
        
        for(auto &query : shifts) {
            int start = query[0];
            int end = query[1];
            int x = query[2];
            
            if(x == 0) {
                ans[start] -= 1;
                if(end + 1 < n) {
                    ans[end + 1] += 1;
                }
            } else {
                ans[start] += 1;
                if(end + 1 < n) {
                    ans[end + 1] -= 1;
                }
            }
        }
        
        for(int i = 1; i < n; i++) {
            ans[i] += ans[i - 1];
        }
        
        for(int i = 0; i < n; i++) {
            int shift = ans[i]%26;
            if(shift < 0){
                shift+=26;
            }
            s[i] = ((s[i] - 'a' + shift) % 26) + 'a';
        }
        
          return s;
    }
};