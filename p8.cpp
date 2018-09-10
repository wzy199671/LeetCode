int valid(string str)
{
    if(str[0]>='0'&&str[0]<='9') return 1;
    return 0;
}
class Solution {
public:
    int myAtoi(string str) 
    {
        while(str[0]==' ') str=str.substr(1,str.length());
        int flag=0;
        int ans=0;
        if(str[0]=='-')
        {
            flag=1;
            str=str.substr(1,str.length());
        }
        if(str[0]=='+')
        {   
            str=str.substr(1,str.length());
            if (flag==1) return 0;
        }
        if(!valid(str)) return 0;
        for(int i=0;i<str.length();i++)
        {
            if(!(str[i]>='0'&&str[i]<='9')) break;
            if(ans>214748364)
            {
                if(flag==1) return INT_MIN;
                else return INT_MAX;
            }
            if(ans==214748364)
            {
               if(str[i]-flag>55)
               {
                if(flag==1) return INT_MIN;
                else return INT_MAX;
               }
            }
            ans=ans*10+(str[i]-48);
        }
        if(flag==1) ans=-ans;
        return ans;
        
    }
};

