class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int ans=start^goal;
        int count=0;
        while(ans>0)
        {
            int a =ans%2;
            if(a==1)
            {
                count++;
            }
            ans=ans>>1  ;
        }
        return count;
    }
};