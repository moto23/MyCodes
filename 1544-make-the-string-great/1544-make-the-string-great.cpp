class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i  = s.size()-1; i>=0; i--){
            if(st.empty()) st.push(s[i]);
            else{
                int c = st.top();
                int a = s[i];
                if(islower(c)){
                    if(isupper(a)){
                        if(c==tolower(a)) st.pop();
                        else st.push(s[i]);
                    }else st.push(s[i]);
                }
                else if(isupper(c)){
                    if(islower(a)){
                        if(a == tolower(c)) st.pop();
                        else st.push(s[i]);
                    }else st.push(s[i]);
                }
                else st.push(s[i]);
            }
            
        }
        string ans = "";
        while(!st.empty()){
            char a = st.top();
            st.pop();
            ans+=a;
        }
        return ans;
    }
};