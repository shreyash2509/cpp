class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) {
            return nums.size();
        } else {
            set<int> m(nums.begin(), nums.end());
            int max = 0, max2 = 0;
            int c = 0;
            auto it = m.begin();
            auto prev = it;
            for (++it; it != m.end(); ++it) {
                if (*prev - *it == -1 || *prev - *it == 0) {
                    c++;
                    max = c;
                } else {
                    if (max2 < max) {
                        max2 = max;
                    }
                    c = 0;
                }
                prev = it;
            }
            if (max2 < max) {
                max2 = max;
            }
            return max2 + 1;
        }
    }
};
