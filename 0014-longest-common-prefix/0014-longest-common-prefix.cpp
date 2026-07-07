class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.empty())
        {
            return  "";
        }

        int n=strs.size();
        string result="";
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(strs[j]>strs[j+1])
                {
                    string temp=strs[j];
                    strs[j]=strs[j+1];
                    strs[j+1]=temp;
                }
            }
        }
        int mini=min(strs[0].size(),strs[n-1].size());
        int idx=-1;
        int i=0;
        while(i<mini && strs[0][i]==strs[n-1][i])
        {
            i++;
        }
        return strs[0].substr(0,i);
    }
};