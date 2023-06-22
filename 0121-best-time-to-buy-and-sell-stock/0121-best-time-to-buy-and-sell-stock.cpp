class Solution {
public:
    int maxProfit(vector<int>& a) {
        int l = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < a.size(); i++){
            if (a[i] < l){
                l = a[i];
            }
            pist = a[i] - l;
            if(op < pist){
                op = pist;
            }
        }
        return op;
    }
};