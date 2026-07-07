class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        vector<int> temp(26,0);
        vector<int> chimp(26,0);
        int n=s.size();
        int m=t.size();
        for(int i=0;i<n;i++)
        {
            temp[s[i]-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            chimp[t[i]-'a']++;
        }
        if(n==m && temp==chimp)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};