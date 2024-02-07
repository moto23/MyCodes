class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        set<pair<int,char>> s1;

        for(auto i :mp){

            s1.insert({i.second,i.first});
        }
        string ans;
        for(auto k : s1){
            int freq=k.first;
            for(int i=0;i<freq;i++){
                ans+=k.second; 
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};