class Solution {
public:
    bool CheckEqual(int H1[], int H2[])
    {
    for (int i = 0, j = 0; i < 26 && j < 26; i++, j++)
    {
        if (H1[i] != H2[j])
            return false;
    }
    return true;
    }

    bool checkInclusion(string s1, string s2) {
    // hash table for s1
    int HS1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        HS1[s1[i] - 'a']++;
    }

    // first window
    int HS2[26] = {0};
    int i;
    int WindowSize = s1.length();
    for (i = 0; i < WindowSize && i<s2.length(); i++)
    {
        HS2[s2[i] - 'a']++;
    }

    if (CheckEqual(HS1, HS2))
        return true;

    // traversing rest of the string
    while (i < s2.length())
    {
        HS2[s2[i] - 'a']++;
        HS2[s2[i - WindowSize] - 'a']--;
        if (CheckEqual(HS1, HS2))
            return true;
        i++;
    }
    return false;  
    }
};