class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
       
            for(int j=0;j<s.size();j++)
            {
            int l=0;
            int r=0;
            for(int k=0;k<j;k++)
            {
                if(s[k]=='R')
                r++;
                else
                l++;
            }
            if(r==l)
            count++;
            }
        
    return count;
    }
};