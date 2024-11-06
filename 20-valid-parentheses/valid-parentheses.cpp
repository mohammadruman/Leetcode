class Solution {
public: bool match(char open, char close){
        if(open=='(' && close ==')' ) return true;
        if(open=='{' && close =='}' ) return true;
        if(open=='[' && close ==']' ) return true;
        return false;
       }
    bool isValid(string s) {
       stack<char>st;
       for(int i =0; i <s.length(); i++){
        char ch = s[i];
        if(ch ==  '(' || ch== '{' || ch== '['){
            st.push(ch);
        }
        else{
            if(!st.empty()&& match(st.top(),ch)){
                st.pop();
            }
            else{
                return false;
            }
        }
       }
        if(st.empty()){
            return true;
        }
        else {
            return false;
        }
    }
};