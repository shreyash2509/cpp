class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int x=arr.size();
        for(int i=0;i<x;i++)
        {
            if(arr[i]==0)
            {
                arr.insert(arr.begin() + i, 0);
                i++;
            }
        }
        arr.resize(x);
    }
};