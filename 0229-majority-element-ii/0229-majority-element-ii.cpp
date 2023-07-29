class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int n = nums.size();
        vector<int> result;

        for (int num : nums) {
            count[num]++;
            if (count[num] > n / 3) {
                if (find(result.begin(), result.end(), num) == result.end()) {
                    result.push_back(num);
                }
            }
        }

        return result;
    }
};
