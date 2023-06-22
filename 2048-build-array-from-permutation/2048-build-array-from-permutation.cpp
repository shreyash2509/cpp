class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> x;
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
            x.push_back(nums[nums[i]]);
        }
        return x;
    }
};