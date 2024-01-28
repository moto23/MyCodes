class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ransome(255);
        vector<int> mag(255);
        int rlen = ransomNote.length();
        int mlen = magazine.length();
        for(int i = 0; i < rlen; i++) {
            ransome[int(ransomNote[i])]++;
        }
        for(int i = 0; i < mlen; i++) {
            mag[int(magazine[i])]++;
        }
        for(int i =0; i < 255; i++) {
            if(!ransome[i]) {
                continue;
            }
            if(ransome[i] > mag[i]) {
                return false;
            }
        }
        return true;
    }
};