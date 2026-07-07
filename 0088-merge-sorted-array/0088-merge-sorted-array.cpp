class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int left=m-1;
        int right=n-1;
        int mid=m+n-1;
        while(left>=0 && right>=0)
        {
            if(nums1[left]<=nums2[right])
            {
                nums1[mid]=nums2[right];
                right--;
                mid--;
            }
            else if(nums1[left]>nums2[right])
            {
                nums1[mid]=nums1[left];
                left--;
                mid--;
            }
        }
        while(right>=0)
        {
            nums1[mid]=nums2[right];
            right--;
            mid--;
        }
    }
};