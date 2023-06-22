// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int s=1;
        long long int e=n;
        long long int mid=(e+s)/2;
        int ans;
            while(s<=e){
                if(isBadVersion(mid)==false){s=mid+1;}
                    else if(isBadVersion(mid)==true){e=mid-1; ans=mid;}
                mid=(e+s)/2;
            }
        return ans;
    }
};