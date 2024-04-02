class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // idea is to record occurence of every element of string s and string t, to check for isomorphic property from both side (i.e s should be isomorphic to t and t should be isomorphic to s)
        int size=s.size();

        unordered_map <char, vector<int>> mp1; // vector<int> to store multiple occurences of string s
        unordered_map <char, vector<int>> mp2; // vector<int> to store multiple occurences of string t

        // putting string s elements in map1
        for(int i=0;i<size;i++)
            mp1[s[i]].push_back(i);

         // putting string t elements in map2
        for(int i=0;i<size;i++)
            mp2[t[i]].push_back(i);

        for(int i=0;i<size;i++){
            if(mp1[s[i]]!=mp2[t[i]])
                return false;
        }

        return true;
    }
};