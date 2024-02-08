class Solution {
public:
    int countBinarySubstrings(string s) {
        int j = 0;
        int curr = 'a';              //Random initialize
        int count= 0 ;
        for(int i = 1;i<s.size();i++){
            if(s[i] != curr || j<0){
                curr = s[i];
                j = i-1;
            }
            if(s[i] == curr and s[j] !=curr){
                count++;
                j--;
            }
        }

        return count;

    }
};