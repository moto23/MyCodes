class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        set<int> s;
        s.insert(2);s.insert(3);s.insert(5);s.insert(7);s.insert(11);
        s.insert(13);s.insert(17);s.insert(19);s.insert(23);s.insert(29);
        s.insert(31);
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            int no=i,cnt=0;
            for(int j=31;j>=0;j--)
            {
                int k=no>>j;
                if(k&1) cnt++;
            }
            if(s.find(cnt)!=s.end()) ans++;
        }
        return ans;
    }
};