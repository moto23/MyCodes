class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int off=0;
        int on=0;
        int ans=0;
        int flag=0;
        for(int i=0;i<bank.size();i++){
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1' && flag==0) on++;
                else if(bank[i][j]=='1' && flag!=0)off++;
            }
            ans+=on*off;
            if(off>0){
                on=off;
                off=0;
            }
            if(on>0) flag=1;
        }
        return ans;
    }
};