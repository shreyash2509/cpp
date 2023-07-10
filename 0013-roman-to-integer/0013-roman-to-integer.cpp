class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int ans = 0;
        int n = s.length();
        
        for (int i = 0; i < n - 1; i++) {
            int current = m[s[i]];
            int next = m[s[i+1]];
            
            if (current < next) {
                ans -= current;
            } else {
                ans += current;
            }
        }
        
        // Add the value of the last character
        ans += m[s[n-1]];
        
        return ans;
    }
};
