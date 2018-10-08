void generate(vector<string>& gen, int n,string str,int count)
{   string s;
    if(count>=0)
    {
        if (n==0)
        {
             if(count==0) gen.push_back(str) ;
        }
        else
        {
            s=str+"(";
            generate(gen, n-1,s,count+1);
            s=str+")";
            generate(gen, n-1,s,count-1);
        }
    }
}




class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> gen;
        generate(gen,n*2,"",0);
        return gen;
    }
};