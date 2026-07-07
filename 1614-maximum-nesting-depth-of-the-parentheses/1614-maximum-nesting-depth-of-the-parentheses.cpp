class Solution {
public:
    int maxDepth(string s) 
    {
        int n=s.size();
        int count=0;
        int maxy=0;
        for(char i:s)
        {
            if(i=='(')
            {
                count++;
                maxy=max(maxy,count);
            }
            
            else if(i==')')
            {
                count--;
            }
        }
        return maxy;
    }
};