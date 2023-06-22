class Solution {
public:
    bool isAnagram(string s, string t) {
        int h[26]={0},h2[26]={0};
        for(int i=0;i<s.length();i++)
        {
            h[s[i]-97]++;
        }
        for(int i=0;i<t.length();i++)
        {
            h2[t[i]-97]++;
        }
        for(int i=0;i<26;i++)
        {cout<<h[i]<<"  "<<h2[i]<<i;
            if(h[i]!=h2[i])
            {
                return false;
            }
        }
        return true;

    }
};