class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> g;
        for(auto str:strs)
        {
            string sortedstr=str;
            sort(sortedstr.begin(),sortedstr.end());
            g[sortedstr].push_back(str);
        }
        vector<vector<string>> st;
        for(auto pair:g){
            st.push_back(pair.second);
        }
        return st;
    }
};