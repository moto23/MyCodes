class Solution {
public:
    bool isHappy(int n) {
        if(n==0) return false;
        if(n==1) return true;
        if(n>1 && n<=4) return false;
        int s=0;
        if(n>=5)
        {
            while(n>0)
            {
                int r=n%10;
                s=s+(r*r);
                n=n/10;
            }
            if(s==1)
            {
                return true;
            }
        }
        return isHappy(s);
    }
};