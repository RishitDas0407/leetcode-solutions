class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int n=nums.size();
        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j=0;j<n-i-1;j++)
        //     {
        //         if(nums[j]>nums[j+1])
        //         {
        //             int temp=nums[j];
        //             nums[j]=nums[j+1];
        //             nums[j+1]=temp;
        //         }
        //     }
        // }
        // int count=1;
        // for(int i=n-1;i>0;i--)
        // {
        //     if(nums[i]!=nums[i-1])
        //     {
        //         count++;
        //         if(count==3)
        //         {
        //             return nums[i-1];
        //         }
        //     }
        // }
        // return nums[n-1];
        long long first=LLONG_MIN;
        long long second=LLONG_MIN;
        long long third=LLONG_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>first)
            {
                third=second;
                second=first;
                first=nums[i];
            }
            if(nums[i]>second && nums[i]<first)
            {
                third=second;
                second=nums[i];
            }
            if(nums[i]>third && nums[i]<second)
            {
                third=nums[i];
            }
        }
        if(third!=LLONG_MIN)
        {
            return third;
        }
        else
        {
            return first;
        }
    }
};