class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        int n=s.size();
        /*if(s==goal) 
        {
            return true;
        }
        for(int i=1;i<n;i++)
        {
            char a=s[0];
            for(int k=0;k<n-1;k++)
            {
                s[k]=s[k+1];
                    
            }
            s[n-1]=a;
            if(s==goal)
            {
                return true;
            }
        }

        return false;*/
        if(s.size() == goal.size() && (s+s).find(goal)!=string::npos)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};