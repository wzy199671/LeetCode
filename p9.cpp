class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int x_1,x_2;
        x_1=x;
        x_2=0;
        while(x!=0)
        {
            x_2=x_2*10+x%10;
            x/=10;
        }
        if(x_1==x_2) return true;
        else return false;
    }
};