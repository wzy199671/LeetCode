class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1) return s;
        string* str=new string[numRows];
        for(int i=0;i<numRows;i++)
        {
            str[i]="";
        }
        for(int i=0;i<s.length();i++)
        {
              if(i%(2*numRows-2)<numRows) str[i%(2*numRows-2)]+=s[i];
              else str[numRows-i%(numRows-1)-1]+=s[i];
            
        }
        string output;
        for(int i=0;i<numRows;i++)
        {
            output+=str[i];
        }
         return output;
    }
   
};