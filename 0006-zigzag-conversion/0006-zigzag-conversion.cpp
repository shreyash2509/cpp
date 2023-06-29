class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;
        
        string res;
        int n = s.length();
        int cycleLen = 2 * numRows - 2;
        
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < n; j += cycleLen) {
                res += s[j];
                
                int nextJ = j + cycleLen - 2 * i;
                if (i != 0 && i != numRows - 1 && nextJ < n)
                    res += s[nextJ];
            }
        }
        
        return res;
    }
};
