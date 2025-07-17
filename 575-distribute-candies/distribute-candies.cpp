class Solution {
public:
    int distributeCandies(vector<int>& v) {
        int n = v.size();
        set<int>s;
        for(int i =0; i <n;i++){
            s.insert(v[i]);
        }
       if(n/2<s.size())return n/2;
       else return s.size();
    }
};