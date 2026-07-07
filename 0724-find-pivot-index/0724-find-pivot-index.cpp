class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     int lsum=0;
        //     int rsum=0;
        //     for(int j=0;j<i;j++)
        //     {
        //         lsum+=nums[j];
        //     }
        //     for(int j=i+1;j<n;j++)
        //     {
        //         rsum+=nums[j];
        //     }
        //     if(lsum==rsum)
        //     {
        //         return i;
        //     }
        // }
        int tsum=0;
        for(int i=0;i<n;i++)
        {
            tsum+=nums[i];
        }
        int lsum=0;
        int rsum=0;
        for(int i=0;i<n;i++)
        {
            rsum=tsum-lsum-nums[i];
            if(lsum==rsum)
            {
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};