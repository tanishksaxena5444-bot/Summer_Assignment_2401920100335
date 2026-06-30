class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){ 
             int a=st.top();
              st.pop();
             int ans=a+st.top();
              st.pop();
              st.push(ans);
            }
            else if(tokens[i]=="-"){ 
              int a=st.top();
              st.pop();
              int ans=st.top()-a;
              st.pop();
              st.push(ans);
            }
            else if(tokens[i]=="*"){
              int a=st.top();
              st.pop();
             int ans=a*st.top();
              st.pop();
              st.push(ans);
            }
            else if(tokens[i]=="/"){ 
             int a=st.top();
              st.pop();
             int ans=st.top()/a;
              st.pop();
              st.push(ans);
            }
            else {
                st.push(stoi(tokens[i]));
            }
        }
         return st.top();
    }
};