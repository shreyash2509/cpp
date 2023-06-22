class Solution {
public:
    bool isValid(string s) {
        stack<char> k;
        k.push(6);
        
        for(int i=0;i<s.length();i++)
        {cout<<k.top();
            if(k.top()=='('&&s[i]==')')
                k.pop();
            else if(k.top()=='{'&&s[i]=='}')
                k.pop();
            else if(k.top()=='['&&s[i]==']')
                k.pop();
            else
               k.push(s[i]);
        }
        
        if(k.top()=='')
            return true;

        return false;
    }
};