int check(string s, char c)
{    
    for(int i=0;i<s.length();i++)
    {
        if(c==s[i]) return i+1;
    }
    return 0;
}


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int max=0,now=0,begin=0;
    string windows="";
     for(int i=0;i<s.length();i++)
     {
         if (windows.length()==0)
         {
             windows=windows+s[i];
             now++;
             begin=i;
         }
         else
         {
             if(check(windows,s[i])==0)
             {
                 windows=windows+s[i];
                 now++;
             }
             else
             {
                 now=1;
                 begin=i-(windows.length()-check(windows,s[i]));
                 windows=s[begin];
                 i=begin;
             }
         }
         if (max<now) max=now;
     }
     return max;
    }
};