
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        char c;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
            {
                stk.push(s[i]);
            }
            else
            { 
                if(stk.empty()) return false;
                c=stk.top();
            if(s[i]=='}')
            {
                if (c=='{') stk.pop();
                else return false;
            }
            if(s[i]==']')
            {
                if (c=='[') stk.pop();
                else return false;
            }
            if(s[i]==')')
            {
                if (c=='(') stk.pop();
                else return false;
            }
            }
        }
        if(stk.empty()) return true;
        else return false;
    }
};