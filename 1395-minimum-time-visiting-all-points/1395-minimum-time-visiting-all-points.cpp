class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        vector<int> x;
        x.resize(2);
        int l=0;
        for(int i=0;i<points.size()-1;i++)
        {
            x[0]=abs(points[i][0]-points[i+1][0]);
            x[1]=abs(points[i][1]-points[i+1][1]);
            if(x[0]>x[1])
            {
                l=l+x[0];
            }else{
                l=l+x[1];
            }

        }
        return l;
    }
};