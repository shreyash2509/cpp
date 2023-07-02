class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.empty() || s2.size() < s1.size()) {
            return false;
        }
        
        unordered_map<char, int> st;
        for (char c : s1) {
            st[c]++;
        }
        
        for (int i = 0; i <= s2.size() - s1.size(); i++) {
            unordered_map<char, int> str = st;
            int k = s1.size();
            
            for (int j = i; j < s1.size() + i; j++) {
                if (str[s2[j]] == 0) {
                    break;
                } else {
                    str[s2[j]]--;
                    k--;
                }
            }
            
            bool allZeros = true;
            for (const auto& kv : str) {
                if (kv.second != 0) {
                    allZeros = false;
                    break;
                }
            }
            
            if (k == 0 && allZeros) {
                return true;
            }
        }
        
        return false;
    }
};
