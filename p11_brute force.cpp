class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0;
        int temp=0;
        for(int i=0;i<height.size();i++)
        {
            for(int j=i+1;j<height.size();j++)
            {
                temp=(height[i]<height[j])?height[i]:height[j];
                temp=(j-i)*temp;
                if(temp>max) max=temp;
            }
        }
        return max;
        
    }
};