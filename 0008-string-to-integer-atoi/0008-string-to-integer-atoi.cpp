class Solution {
public:
    int myAtoi(string s) 
    {
        int i=0;
        int n=s.length();
        while(i<n && s[i]==' ')
            i++;
        int sign=1;
        if(i<n && (s[i]=='+' || s[i]=='-')) 
        {
            if(s[i]=='-')
                sign=-1;
            i++;
        }
        long long num=0;
        while(i<n && isdigit(s[i])) 
        {
            if(num > (INT_MAX-(s[i]-'0'))/10) 
            {
                return sign==1 ? INT_MAX:INT_MIN;
            }
            num=num*10+(s[i]-'0');
            i++;
        }
        return sign*num;
    }
};