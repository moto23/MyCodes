class Solution {
public:
    int evalRPN(vector<string>& A) {
        stack<int> st;
        for(int i = 0 ; i < A.size() ; i++)
        {
            if(A[i].length() > 1 || isdigit(A[i][0])) st.push(stoi(A[i]));
            else if(A[i][0] == '+' )
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp2 + tmp1);
                
            }
            else if(A[i][0] == '-' )
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp2 - tmp1);
            }
            else if(A[i][0] == '*' )
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp2 * tmp1);
            }
            else if(A[i][0] == '/' )
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp2 / tmp1);
            }

        }
        return st.top();
    }
};