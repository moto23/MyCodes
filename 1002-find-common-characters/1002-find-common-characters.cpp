class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        int num_of_words = words.size();
        vector<string>result;
        
        vector<unordered_map<char, int>>freq;
        
        for (int i = 0; i < words.size(); i++) {
            unordered_map<char,int>curr_freq;
            for (int j = 0; j < words[i].size(); j++) {
                curr_freq[words[i][j]]++;
            }
            
            freq.push_back(curr_freq);
        }
        
        for (int i = 0; i < 26; i++) {
            int ascii = 97 + i;
            char charr = char(ascii);
            int minn = INT_MAX;
            for (int j = 0; j < words.size(); j++) {
                if (freq[j].find(charr) == freq[j].end()){
                    minn = 0;
                }                
                minn = min(freq[j][charr], minn);
            }
            
            while (minn > 0 && minn != INT_MAX) {
                cout<<"Hey";
                result.push_back(string(1, charr));
                minn--;
            }
        }
        
       
        return result;
        
    }
};