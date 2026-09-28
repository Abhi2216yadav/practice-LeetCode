class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i< s.size(); i++){
            if((s[i] == '(') || (s[i] == '{') || (s[i] == '[') ){
                //opening brackets;
                st.push(s[i]);
            }else{

                //closing
                if(st.size() == 0){
                    return false;
                }//match condition
                if((st.top() == '(' && s[i] == ')') || 
                    (st.top() == '{' && s[i] == '}') ||
                    (st.top() == '[' && s[i] == ']') ){
                        st.pop();

                    }else{//no match
                        return false;
                    }
                
            }
        }
        return st.size() == 0;
    }
};