class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        
        for (int num : nums1) {
            v.insert(lower_bound(v.begin(), v.end(), num), num);
        }
        for (int num : nums2) {
            v.insert(lower_bound(v.begin(), v.end(), num), num);
        }
        
        int x = v.size();
        
        if (x % 2 == 0) {
            return (v[x/2 - 1] + v[x/2]) / 2.0;
        } else {
            return v[x/2];
        }
    }
};
