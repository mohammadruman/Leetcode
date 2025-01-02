class Solution {
public:
    bool isVowel(char &ch){
        if( ch =='a' || ch=='e'  || ch =='i' || ch=='o' || ch =='u'){
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int q = queries.size();
        int w = words.size();
        vector<int>ans(q);
        vector<int>cummulativesum(w);
        int sum=0;
        for(int i =0 ; i <w ;i++){
            if(isVowel(words[i][0])&&isVowel(words[i].back())){
                sum++;
            }
            cummulativesum[i]=sum;
        }
        for(int i =0; i < q;i++){
            int li = queries[i][0];
            int ri = queries[i][1];
         int res = cummulativesum[ri]- ((li>0) ?cummulativesum[li-1] :0);
            ans[i]=res;
        }
        return ans;

    }
};