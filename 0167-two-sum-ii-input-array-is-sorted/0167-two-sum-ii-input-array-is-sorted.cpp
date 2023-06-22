class Solution {
public:
      vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
        vector<int> res(2);
        for(int i=0;i<n;i++)
        {
            int key =target-a[i];
            int beg=i+1,end=n-1;
            while(beg<=end)
            {
                int mid=(beg+end)/2;
                if(a[mid]>key)
                    end=mid-1;
                else if(a[mid]<key)
                    beg=mid+1;
                else
                {
                   res[0]=i+1;
                    res[1]=mid+1;
                    return res;
                }
            }
        }
        return res;
    }
};