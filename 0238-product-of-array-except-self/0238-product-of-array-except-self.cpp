class Solution {
public:
    int arrayProduct(vector<int>& v)
    {
        int initialProduct = 1;
        return accumulate(v.begin(), v.end(), initialProduct, multiplies<int>());
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int s=nums.size(),x;
        vector<int> l;
        l.resize(s);
        int tot=arrayProduct(nums);
        cout<<tot;
        for(int i=0;i<s;i++)
        {
            if(nums[i]==0)
            {   nums[i]=1;
                int tot2=arrayProduct(nums);
                l[i]=tot2;
                nums[i]=0;
            }
            else{
            l[i]=tot/nums[i];
            }
        }
        return l;
    }
};