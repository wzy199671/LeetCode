    string findprefix(string str1,string str2)
{
    string str="";
    for(int i=0;i<(str1.length()<str2.length())?str1.length():str2.length();i++)
    {
        if (str1[i]==str2[i])
        {
            str+=str1[i];
        }
        else return str;
    }
        return str;
}
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0) return "";
        string str=strs[0];
        for(int i=0;i<strs.size();i++)
        {
            str=findprefix(str,strs[i]);
            if (str=="") return str;
        }
        return str;
    }
};

