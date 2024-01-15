class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

        int n = matches.size();
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            int u = matches[i][0];
            int v = matches[i][1];

            maxi = max({maxi, u, v});

        }

        vector<int> indegree(maxi+1, 0);
        vector<int> outdegree(maxi+1, 0);

        for(int i = 0; i<n; i++){
            int u = matches[i][0];
            int v = matches[i][1];

            indegree[v]++;
            outdegree[u]++;

        }

        vector<int> ans1;
        vector<int> ans2;

        for(int i = 0; i<=maxi; i++){
            if(outdegree[i] > 0 && indegree[i] == 0){
                ans1.push_back(i);
            }
            if(indegree[i] == 1){
                ans2.push_back(i);
            }
        }

        return {ans1, ans2};
        
    }
};