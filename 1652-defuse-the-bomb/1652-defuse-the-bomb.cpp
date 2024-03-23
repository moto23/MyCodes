class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> ans(n,0);
        int x=k;
        if(k==0) return ans;
        if(k<0){
            reverse(code.begin(),code.end());
            k=abs(k);
        }
        int s=0;
        for(int i=1;i<=k;i++) s+=code[i];
        ans[0]=s;
        for(int i=1;i<n;i++){
            int y=(n+i+k)% n;
            ans[i]= ans[i-1]+ code[y] - code[i];
        }
        if(x<0) reverse(ans.begin(),ans.end());
        return ans;
    }
};