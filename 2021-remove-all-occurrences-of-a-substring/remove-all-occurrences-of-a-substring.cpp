class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
      
        int n = part.size();
        char a = part[n-1];
        for(int i =0; i <s.size();i++){
            st.push(s[i]);
            if(st.size()>=n){
                  string temp="";
               for(int i = n-1; i >=0;i--){
                temp = st.top() + temp;
                st.pop();
               }
                if (temp != part) {
                    for (char ch : temp) {
                        st.push(ch);
                    }
                }
            }
        }
        string ans ="";
        while(!st.empty()){
          ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};