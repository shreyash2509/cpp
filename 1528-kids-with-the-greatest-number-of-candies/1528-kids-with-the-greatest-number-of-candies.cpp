class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=*max_element(candies.begin(), candies.end());
        vector<bool> x;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                x.push_back(true);
            }
            else{
                x.push_back(false);
            }
        }
        return x;
    }
};

// *max_element(a.begin(), a.end());