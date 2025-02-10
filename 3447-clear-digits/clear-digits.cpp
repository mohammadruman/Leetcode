class Solution {
public:
    string clearDigits(string s){
        stack<char>v;
        for(int i =0; i < s.size();i++){
            if(isdigit(s[i])){
                if(!v.empty()){
                    v.pop();
                }
            }
            else{
                v.push(s[i]);
            }
        }
        string result;
        while (!v.empty()) {
            result += v.top();
            v.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};