class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans(temp.size(), 0); 
        stack<int> st;  
        
        for (int i = 0; i < temp.size(); i++) {
            while (!st.empty() && temp[i] > temp[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                ans[prevIndex] = i - prevIndex;
            }
            st.push(i);
        }
        
        return ans;
    }
};
