class Solution {
public:
    int reverse(int x) {
        string str;
        int flag=0;
        if(x<0) 
        {
            x=-x;
            flag=1;
        }
        stringstream stream(str);
        string ans="";
        char buf;
        stream<<x;
        while(stream)
        {
            stream>>buf;
            ans=buf+ans;
        }
        ans=ans.substr(1,ans.length()-1);
        while(ans[0]=='0') ans=ans.substr(1,ans.length()-1);
        int answ=atoi(ans.c_str());
        if (flag==1) answ=-answ;
        cout<<answ<<endl;
        if(ans.length()>10) answ=0;
        else
        {
            ans=ans.substr(0,ans.length()-1);
            int x=atoi(ans.c_str());
            cout<<x<<endl;
            if(x>214748364) answ=0;
        }
 
        
        return answ;
    }
  
};