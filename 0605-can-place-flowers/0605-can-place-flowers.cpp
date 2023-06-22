class Solution {
public:
    bool canPlaceFlowers(vector<int>& x, int n) {
        int c=0;
        x.insert(x.begin(),0);
        x.insert(x.end(),0);
        for(int i=1;i<x.size()-1;i++)
        {
            if(x[i-1]==0&&x[i]==0&&x[i+1]==0)
            {
                x[i]=1;
                c++;
                i++;
                if(c>=n){
                    break;
                }
            }
        }
        return c>=n?true:false;
    }
};