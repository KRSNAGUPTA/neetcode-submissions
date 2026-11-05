class Solution {
public:
    int dir[4][2] = {
        {-1, 0}, {0, 1}, {1, 0}, {0, -1}
    };
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<tuple<int,int,int>>q;// row, col, dist
        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0 ; j  < grid[0].size(); j++){
                if(grid[i][j] == 0){
                    q.push({i,j,0});
                }
            }
        }
        while(!q.empty()){
            auto [row, col, dist] = q.front();
            q.pop();
            for(auto i: dir){
                int newR = row + i[0];
                int newC = col + i[1];
                if(newR >= 0 && newR <m && newC >= 0 && newC < n && grid[newR][newC] != 0 && grid[newR][newC] != -1){
                    int newDist= dist+1;
                    if(newDist < grid[newR][newC]){
                        q.push({newR, newC, dist+1});
                        grid[newR][newC] = min(grid[newR][newC], dist+1);

                    }
                }
            }
        }
    }
};
