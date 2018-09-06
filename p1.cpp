class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size,num;
        size=nums.size();
        vector<int> ans;
        for(int i=0;i<=size-1;i++)
        {
            num=nums[i];
                for(int j=i+1;j<=size-1;j++)
                {
                    if(num+nums[j]==target)
                    {
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                } 
        }
        return ans;
    }
};