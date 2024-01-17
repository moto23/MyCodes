class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_map<int, int> mpf;

        for(auto i: arr) {
            if(mp.find(i) != mp.end()) {
                mp[i] ++;
            }else{
                mp[i] = 1;
            }
        }
        for(auto i: mp) {
            if(mpf.find(i.second) != mpf.end()){
                return false;
            } else {
                mpf[i.second] = 1;
            }
        }
        return true;
    }
};