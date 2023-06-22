class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++) {
            if (isdigit(tokens[i][0]) || (tokens[i].size() > 1 && isdigit(tokens[i][1]))) {
                st.push(stoi(tokens[i]));
            } else {
                int operand2 = st.top();
                st.pop();
                int operand1 = st.top();
                st.pop();
                int result;
                if (tokens[i] == "+") {
                    result = operand1 + operand2;
                } else if (tokens[i] == "-") {
                    result = operand1 - operand2;
                } else if (tokens[i] == "*") {
                    result = operand1 * operand2;
                } else if (tokens[i] == "/") {
                    result = operand1 / operand2;
                }
                st.push(result);
            }
        }
        return st.top();
    }
};
