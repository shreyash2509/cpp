class Solution {
public:
    int maxi(int a,int b,vector<vector<int>>& grid)
    {int k=a,q=b;
    int max=grid[k-1][q-1];
        for(int i=k-1;i<=k+1;i++)
        {
            for(int j=q-1;j<=q+1;j++)
            {
                if(max<grid[i][j])
                {
                    max=grid[i][j];
                }
            }
        }
        
    return max;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int i;
        vector<vector<int>> x;
        x.resize(grid.size()-2, vector<int> (grid.size()-2, 0));
        for(i=0;i<grid.size()-2;i++)
        {
            for(int j=0;j<grid.size()-2;j++)
            {
                x[i][j]=maxi(i+1,j+1,grid);
            }
        }
        return x;
    }
};