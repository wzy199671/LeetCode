vector<int> twoSum(vector<int>& nums, int target) {
        int size,num;
        size=nums.size();
        vector<int> ans;
        map<int,int> mapint;
        map<int,int>::iterator it;
        for(int i=0;i<size;i++)
        {
            mapint.insert(pair<int,int>(nums[i],i));
        }
        for(int i=0;i<size;i++)
        {
            it=mapint.find(target-nums[i]);
            if(it!=mapint.end()&&i!=mapint[target-nums[i]]) 
            {
                ans.push_back(nums[i]);
                ans.push_back(it->first);
            }
        }
    return ans;

    }
void printv(vector<int> vec)
{
    for(int i=0;i<vec.size();i++)
    {cout<<vec[i];}
    cout<<endl;
    
}
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size,num;
        size=nums.size();
        vector<int> ans,temp,an;
        vector<vector<int>> re;
        temp=nums;
        for(vector<int>::iterator it=nums.begin(); it!=nums.end();it++)
        {
            num=-*it;
            nums.erase(it);
            ans=twoSum(nums,num);
            nums=temp;
            for(vector<int>::iterator ita=ans.begin(); ita!=ans.end();)
            {   
                an.push_back(*it);
                an.push_back(*ita);
                ita=ans.erase(ita);
                an.push_back(*ita);
                ita=ans.erase(ita);
                sort(an.begin(), an.end());
                re.push_back(an);
                an.clear();
            }
        }
        sort(re.begin(), re.end());
        vector<vector<int>>::iterator iter = unique(re.begin(), re.end());
        re.erase(iter, re.end());
        return re;
    }
};

