class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false); cin.tie(NULL);}
    bool isPalim(string s){
        int l = 0, r = s.size()-1;
        while(l <= r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string s = words[i];
            if(isPalim(s)) return s;
        }
        return "";
    }
};