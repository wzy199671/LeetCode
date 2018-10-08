vector<string> rstr(vector<string> str, string s)
{   
    vector<string> ans;
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<s.length();j++)
        {
            ans.push_back(str[i]+s[j]);
        }
    }
    return ans;
}

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string str[8];
        str[0]="abc";
        str[1]="def";
        str[2]="ghi";
        str[3]="jkl";
        str[4]="mno";
        str[5]="pqrs";
        str[6]="tuv";
        str[7]="wxyz";
        vector<string> ans;
        for(int i=0;i<digits.length();i++)
        {
            if(i==0) 
            {
                switch(digits[i])
                {
                    case '2':
                       ans={"a","b","c"}; 
                       break;
                    case '3':
                       ans={"d","e","f"}; 
                       break;
                    case '4':
                       ans={"g","h","i"}; 
                       break;
                    case '5':
                       ans={"j","k","l"}; 
                       break;
                    case '6':
                       ans={"m","n","o"}; 
                       break;
                    case '7':
                       ans={"p","q","r","s"}; 
                       break;
                    case '8':
                       ans={"t","u","v"}; 
                       break;
                    case '9':
                       ans={"w","x","y","z"}; 
                       break;
                }
            }
            
            else
            {
                ans=rstr(ans, str[digits[i]-'2']);
            }
        }
        return ans;
        
    }
};
