class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.length()==0||s.length()==1)
        {
            return true;
        }

        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
        return !isalnum(c);
        }), s.end());
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<"\n";
        int len=s.length();
        for(int i=0,j=len-1;i<len/2;i++,j--)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
        }
        return true;
    }
};


    // if(s2==s)

    // }