class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> a;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(a.find(nums[i])!=a.end())
            {
                return true;
            }
            a.insert(nums[i]);
        }
        return false;
    }
};