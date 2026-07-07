class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int> temp;
        for(char c:s)
        {
            temp[c]++;
        }
        string ans="";
        while(true)
        {
            int maxy=0;
            int ch;
            for(auto i:temp)
            {
                if(i.second>maxy)
                {
                    maxy=i.second;
                    ch=i.first;
                }
            }
            if(maxy==0)
            {
                break;
            }
            ans=ans+string(maxy,ch);
            temp[ch]=0;
        }
        return ans;
    }
};