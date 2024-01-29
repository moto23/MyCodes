class Solution {
public:

    void bfs(vector<vector<int>>& image, int sr, int sc, int color){ 
        vector<vector<int>> dir={{-1,0},{0,1},{1,0},{0,-1}};
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            int i=p.first;
            int j=p.second;
            int originalColor=image[p.first][p.second];
            if(originalColor==color) continue;
            image[i][j]=color;
            for(auto v:dir){
                int newi=i+v[0];
                int newj=j+v[1];

                if(newi>=0 && newj>=0 && newi<image.size() && newj<image[0].size() && image[newi][newj]==originalColor) q.push({newi,newj});
            }
        }

        return;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;

        bfs(image,sr,sc,color);

        return image;
    }
};