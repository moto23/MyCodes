class Solution {
public:
    bool checkPresent(unordered_map<char, int> &mpS, unordered_map<char, int> &mpT){
        for(auto it: mpT){
            if(it.second > mpS[it.first]){
                return false;
            }
        }

        return true;
    }

    string minWindow(string s, string t) {
        if(t.size() > s.size())return "";
        unordered_map<char, int> mpT, mpS;
        for(char c: t)mpT[c]++;
        int i=0, n = s.size(), st = -1, en = -1, mnLen = INT_MAX;
        for(int j=0; j<n; j++){
            mpS[s[j]]++;
            while(checkPresent(mpS, mpT)){
                int len = j - i + 1;
                if(len < mnLen){
                    st = i;
                    en = j;
                    mnLen = len;
                }
                mpS[s[i++]]--;
            }
        }

        if(mnLen == INT_MAX)return "";
        return s.substr(st, mnLen);
    }
};
