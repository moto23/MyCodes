class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int ans = 0;
        int prev = 0;
        int curr = 1;

        int n = colors.size();

        while(curr<n){

            if(colors[prev]==colors[curr]){

                if(neededTime[prev]<=neededTime[curr]){
                    ans+= neededTime[prev];
                    prev=curr;
                    curr++;
                }

                else{
                    ans += neededTime[curr];
                    curr++;
                }
            }
            else{
                prev=curr;
                curr++;
            }
        }

        return ans;
    }
};