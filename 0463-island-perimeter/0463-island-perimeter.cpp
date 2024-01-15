class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.size()==0) return 0;
        int result = 0;
        int r = grid.size();
        int c = grid[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j]==1) {
                    result+=4;
                    if(i-1>=0 && grid[i-1][j]==1)
                    {
                        result--;
                    }
                    if(i+1<=r-1 && grid[i+1][j]==1)
                    {
                        result--;
                    } 
                    if(j-1>=0 && grid[i][j-1]==1){
                        result--;
                    }
                    if(j+1<=c-1 && grid[i][j+1]==1 )
                    {
                        result--;
                    }
                }
            }
        }
        return result;
    }
};