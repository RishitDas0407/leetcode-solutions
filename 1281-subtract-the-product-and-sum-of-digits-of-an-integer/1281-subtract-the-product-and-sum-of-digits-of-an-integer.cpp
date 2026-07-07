class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int prod=1;
        int sum=0;
        while(n>0)
        {
            int num=n%10;
            prod=prod*num;
            sum=sum+num;
            n=n/10;
        }
        return prod-sum;
    }
};