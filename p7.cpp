class Solution {
public:
    int reverse(int x) {
        string str;
        int flag=0;
        if(x<INT_MIN+1) return 0;
        if(x<0) 
        {
            x=-x;
            flag=1;
        }
        int num;
        int answ=0;
        while(x!=0)
        {   
            num=x%10;
            if(answ>INT_MAX/10) return 0;
            if(answ==INT_MAX/10)
            {
                if(num-flag>7) return 0; 
            }
            answ=answ*10+num;
            x=x/10;
        }
        if(flag==1) answ=-answ;
        return answ;
    }
  
};