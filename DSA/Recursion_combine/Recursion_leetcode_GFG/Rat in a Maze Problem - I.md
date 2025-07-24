
Consider a rat placed at position (0, 0) in an n x n square matrix mat[][]. The rat's goal is to reach the destination at position (n-1, n-1). The rat can move in four possible directions: 'U'(up), 'D'(down), 'L' (left), 'R' (right).
The matrix contains only two possible values:

    0: A blocked cell through which the rat cannot travel.
    1: A free cell that the rat can pass through.

 Your task is to find all possible paths the rat can take to reach the destination, starting from (0, 0) and ending at (n-1, n-1), under the condition that the rat cannot revisit any cell along the same path. Furthermore, the rat can only move to adjacent cells that are within the bounds of the matrix and not blocked.

    If no path exists, return an empty list.

Note: Return the final result vector in lexicographically smallest order

```cpp
class Solution {
  public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    string dir="UDLR";
    int n;
    bool valid(int i,int j){
        return i>=0 && j>=0&&i<n&&j<n;
    }
    //                          total(maze,0,0,n,path,ans,visited);
    // void total(vector<vector<int>&maze,int i,int j,int n,string &path ,vector<string>&ans,vector<vector<int>>&visited)
    void total(vector<vector<int>>& maze, int i, int j, string &path, vector<string>& ans, vector<vector<int>>& visited)
    {
        if(i==n-1 && j==n-1){
            ans.push_back(path);
            return;
        }
        visited[i][j]=1;
        for(int k=0;k<4;k++)
        {
            if(valid(i+row[k],j+col[k]) && maze[i+row[k]][j+col[k]] &&!visited[i+row[k]][j+col[k]])
            {
               path.push_back(dir[k]); 
               total(maze,i+row[k],j+col[k],path,ans,visited);
               path.pop_back();
            }
        }
        visited[i][j]=0;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        // vector<vector<bool>>visited(maze.size(),0);
        // Corrected line (to match the function's expected type)
         n=maze.size();
vector<vector<int>> visited(n, vector<int>(n, 0));
        string path;
        if(maze[0][0]==0|| maze[n-1][n-1]==0) return ans;
    
    total(maze,0,0,path,ans,visited);
    sort(ans.begin(),ans.end());
    return ans; 
    
    }
};
