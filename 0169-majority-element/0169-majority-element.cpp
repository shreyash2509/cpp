class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> x;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            x[nums[i]]++;
            if(x[nums[i]]>n/2)
            {
                return nums[i];
            }
        }
        return -1;
    }
};