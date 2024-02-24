class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>>store;
        int n = score.size();
        vector<string>ans(n,"");
        for(int i=0;i<n;i++){
            store.push_back({score[i],i});
        }
        sort(store.rbegin(),store.rend());
        for(int i=0;i<n;i++){
            cout<<store[i].first<<" "<<store[i].second<<endl;
            if(i==0)ans[store[i].second]="Gold Medal";
            if(i==1)ans[store[i].second]="Silver Medal";
            if(i==2)ans[store[i].second]="Bronze Medal";
            if(i!=0 && i!=1 && i!=2){
                ans[store[i].second]=to_string(i+1);
            }

        }
        return ans;
    }
};