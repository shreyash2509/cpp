class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int sum2=0;
        for (int num : nums) {
            sum2 += num;
        }
        return sum-sum2;
    }
};