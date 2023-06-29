class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
    
        int n1 = A.size();
        int n2 = B.size();
        int n = n1 + n2;
        if(n1 > n2)
            return findMedianSortedArrays(B,A);
        int partition = (n + 1)/2;
        int start = 0 , end = n1;
         while(start <= end)
         {
             int mid1 = (end + start)/2;
             int mid2 = partition - mid1;
             int leftA = (mid1 <= 0) ? INT_MIN : A[mid1-1];
             int leftB = (mid2 <= 0) ? INT_MIN : B[mid2-1];
             int rightA = (mid1 < n1) ? A[mid1] : INT_MAX;
             int rightB = (mid2 < n2) ? B[mid2] : INT_MAX;
             if(leftA <= rightB && leftB <= rightA)
             {
                 if((n1+n2)%2 == 1)
                 {
                     return max(leftA,leftB);
                 }
                 else
                 {
                     return (max(leftA,leftB) + min(rightA , rightB))/2.0;
                 }
             }
             else if(leftA > rightB)
             {
                 end = mid1 - 1;
             }
             else
             {
                 start = mid1 + 1;
             }
         }
         return 0.0;
    }
};