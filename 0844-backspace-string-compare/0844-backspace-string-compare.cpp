class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        int n=s.size()-1;
        int m=t.size()-1;
        while(n>=0 || m>=0)
        {
            int s1=0;
            while(n>=0)
            {
                if(s[n]=='#')
                {
                    s1++;
                    n--;
                }
                else if(s1>0)
                {
                    s1--;
                    n--;
                }
                else
                {
                    break;
                }
            }
            int s2=0;
            while(m>=0)
            {
                if(t[m]=='#')
                {
                    s2++;
                    m--;
                }
                else if(s2>0)
                {
                    s2--;
                    m--;
                }
                else
                {
                    break;
                }
            }
            if(n>=0 && m>=0)
            {
                if(s[n]!=t[m])
                {
                    return false;
                }
            }
            else if(n>=0 || m>=0)
            {
                return false;
            }
            n--;
            m--;
        }
        return true;
    }
};