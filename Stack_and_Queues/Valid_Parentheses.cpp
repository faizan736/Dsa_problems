class Solution {
public:
    bool isValid(string s) {
        if (s.size() & 1) return false;
        stack<char>st;
        for(int i =0;i<s.length();i++){
            if((s[i] == '(')||(s[i]=='{')||(s[i]=='[')){
                st.push(s[i]);
            }
            else{
                char ch = st.top();
                if((!st.empty())){
                    if((ch == '(' && s[i] == ')')||
                    (ch == '{' && s[i] == '}')||
                    (ch == '[' && s[i] == ']')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            
        }
        return st.empty();
    }
    
};
