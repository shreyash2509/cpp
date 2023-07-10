class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='M'){
                ans+=1000;
            }
            else if(s[i]=='D'){
                ans+=500;
            }
            else if(s[i]=='C'){
                ans+=100;
                if(s[i+1]=='D'){
                    ans+=300;
                    i++;
                }
                else if(s[i+1]=='M'){
                    ans+=800;
                    i++;
                }
            }
            else if(s[i]=='L'){
                ans+=50;
            }
            else if(s[i]=='X'){
                ans+=10;
                if(s[i+1]=='L'){
                    ans+=30;
                    i++;
                }
                else if(s[i+1]=='C'){
                    ans+=80;
                    i++;
                }
            }
            else if(s[i]=='V'){
                ans+=5;
            }
            else{
                ans+=1;
                if(s[i+1]=='V'){
                    ans+=3;
                    i++;
                }
                else if(s[i+1]=='X'){
                    ans+=8;
                    i++;
                }
            }

        }
        return ans;
    }
};