class Solution {
public:
    bool halvesAreAlike(string s) {
       vector<char>vowel = {'a', 'e', 'i', 'o', 'u', 'A','E','I','O','U'};
       int cnt1 = 0 , cnt2 = 0;
       for(int i = 0 ;i < s.size()/2; i++){
         if(find( vowel.begin(),vowel.end(), s[i] ) != vowel.end()) //Checking the  character is vowel or not if yes the increase the cnt1 
            cnt1++;
       }
       for(int i = s.size()/2 ;i < s.size(); i++){
         if(find( vowel.begin(),vowel.end(), s[i] ) != vowel.end()) 
            cnt2++;
       }
       return cnt1 == cnt2;
    }
};