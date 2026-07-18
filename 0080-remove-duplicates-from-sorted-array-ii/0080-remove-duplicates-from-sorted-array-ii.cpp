class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.empty()==1)
        {
            return 0;
        }
        int n=nums.size();
        int a=nums[0];
        int count=0;
        int ac=0;
        for(int i=0;i<n;i++)
        {
            if(a==nums[i])
            {
                count++;
            }
            else if(a!=nums[i])
            {
                a=nums[i];
                count=1;
            }
            if(count<=2)
            {
                nums[ac]=nums[i];
                ac++;
            }
        }
        return ac;
    }
};