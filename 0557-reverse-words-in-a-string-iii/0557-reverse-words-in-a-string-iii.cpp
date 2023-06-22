class Solution {
public:
    string reverseWords(string s) { 
   int i=0;
    int n=s.length();
    while(i<n)
    {
        int j=i+1;
        while(j<n && s[j]!=' ')
        {
            j++;
        }
        int a=i;
        int b=j-1;
        while(a<b)
        {
            char temp=s[a];
            s[a++]=s[b];
            s[b--]=temp;
        }
        i=j+1;
    }
    return s;
}
};