class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if(dividend==INT_MIN && divisor==-1)
        {
            return INT_MAX;
        }
        int sign=1;
        if(dividend>0 && divisor<0)
        {
            sign=-1;
        }
        if(dividend<0 && divisor>0)
        {
            sign=-1;
        }
        long long n=abs((long long)dividend);
        long long d=abs((long long)divisor);
        long long ans=0;
        while(n>=d)
        {
            int count=0;
            while(n>=(d<<(count+1)))
            {
                count++;
            }
            ans+=1LL<<count;
            n=n-(d*(1LL<<count));
        }
        ans=ans*sign;
        
        return (int)ans;
    }
};