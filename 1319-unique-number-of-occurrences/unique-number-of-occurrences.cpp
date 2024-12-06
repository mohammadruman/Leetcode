class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>vec;
        for(int i =0;i < arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto i:mp){
          vec.push_back(i.second); 
        }
        sort(vec.begin(),vec.end());
        for(int i =1 ; i < vec.size();i++){
            if(vec[i]==vec[i-1])return false;
        }
        return true;
    }
};