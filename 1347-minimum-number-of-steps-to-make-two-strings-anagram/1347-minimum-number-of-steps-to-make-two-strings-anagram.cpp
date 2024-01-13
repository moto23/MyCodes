class Solution {
public:
    int minSteps(string s, string t) {
        
        int n = s.size();
        
        unordered_map<char,int> m;

        for(int i = 0 ; i < n ; i++)
        {
            char ch = s[i];
            m[ch]++;
        }

        int ans = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(m.find(t[i]) == m.end() || m[t[i]] == 0) // m[ch] can be zero or not present then we have to replace
            {
                ans++;
            }
            else
            {
                m[t[i]]--;
            }
        }

        return ans;

    }
};