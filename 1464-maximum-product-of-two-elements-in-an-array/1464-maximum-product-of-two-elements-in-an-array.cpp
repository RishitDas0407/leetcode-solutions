class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int n1=INT_MIN;
        int n2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>n1)
            {
                n2=n1;
                n1=nums[i];
            }
            else if(nums[i]>n2)
            {
                n2=nums[i];
            }
        }
        return (n1-1)*(n2-1);
    }
};