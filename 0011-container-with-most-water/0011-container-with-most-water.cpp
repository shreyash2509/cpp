class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int m,max=0;
        while(l<r)
        {
            m=min(height[l],height[r])*(r-l);
            if(height[l]<height[r])
            {
                l++;
            }
            else{
                r--;
            }
            if(max<m)
            {
                max=m;
            }

        }
        cout<<max;
        return max;
    }
};