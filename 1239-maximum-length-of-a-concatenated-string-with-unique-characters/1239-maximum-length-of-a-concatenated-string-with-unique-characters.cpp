class Solution {
public:
    int solve(vector<string> &arr,set<char> &chars, int ind){
        if (ind>=arr.size()){
            return 0;
        }

        int maxLength = 0;
        int chk = 1,k = 0;
        for (int i=0;i<arr[ind].size();i++){
            if (chars.find(arr[ind][i])!=chars.end()){
                chk = 0;
                break;
            }
            chars.insert(arr[ind][i]);
            k++;
        }
        if (chk){
            maxLength = max(maxLength, static_cast<int> (arr[ind].size())+solve(arr,chars,ind+1));
            for (int i=0;i<arr[ind].size();i++){
                chars.erase(arr[ind][i]);
            }

        }
        else{
            for (int i=0;i<k;i++){
                chars.erase(arr[ind][i]);
            }
        }
        maxLength = max(maxLength,solve(arr,chars,ind+1));

        return maxLength;
    }
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        set<char> chars;
        return solve(arr,chars,0);

    }
};