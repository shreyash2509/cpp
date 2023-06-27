class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        double x ; 
        int ans; 
        while (low <= high) {
            int mid = (low + high) / 2;
            x=0;
            
            for (int i = 0; i < piles.size(); i++) {
                x+=ceil((double)piles[i]/mid);
            }
            cout<<x<<" ";
            if (x <= h) {
                ans=mid;
                high = mid - 1;
            } else if (x > h) {
                low = mid + 1;
            }
        }
        
        return ans;
    }
};