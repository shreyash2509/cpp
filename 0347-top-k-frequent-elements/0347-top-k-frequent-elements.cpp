class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> x;
        for(auto y:nums){
            x[y]++;
        }
       priority_queue<pair<int,int>> m;
       for(auto i:x)
       {
           m.push(make_pair(i.second,i.first));
       }

        vector<int> l;
        for(int i=0;i<k;i++)
        {
            l.push_back(m.top().second);
            m.pop();
        }
        return l;
    }
};