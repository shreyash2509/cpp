class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> x; // Create an empty vector.
    int k = 0, l = 0;

    while (k < m && l < n) {
        if (nums1[k] <= nums2[l]) {
            x.push_back(nums1[k]);
            k++;
        } else {
            x.push_back(nums2[l]);
            l++;
        }
    }
    while (k < m) {
        x.push_back(nums1[k]);
        k++;
    }
    while (l < n) {
        x.push_back(nums2[l]);
        l++;
    }
    for (int i = 0; i < m + n; i++) {
        nums1[i] = x[i];
    }
}

};