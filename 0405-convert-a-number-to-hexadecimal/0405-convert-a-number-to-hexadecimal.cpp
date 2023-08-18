class Solution {
public:
    string toHex(int num) {
        string ans = ""; 
        if(num == 0) return "0"; 
        if(num > 0)
       {
            while(num > 0){
            int temp = num % 16;  num /= 16; 
            if(temp <10 && temp >=0) ans = to_string(temp) + ans; 
            else {string k = ""; k += 97 + temp - 10; ans = k + ans;  }
            }
        }
        else {
            long long int n = INT_MAX; 
            n = n<<1;
            n++; 
            n += num; 
            n++; 
            while(n > 0){
            int temp = n % 16;  n /= 16; 
            if(temp <10 && temp >=0) ans = to_string(temp) + ans; 
            else {string k = ""; k += 97 + temp - 10; ans = k + ans;  }
            }

        }

        return ans; 
    }
};