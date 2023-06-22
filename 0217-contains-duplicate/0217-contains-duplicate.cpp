class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<long,long> h;
        for(int i=0;i<nums.size();i++)
        {
            h[nums[i]]++;
            if(h[nums[i]]>1)
            {
                return true;
            }
        }
        return false;
    }

};