class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,char> t1;
        unordered_map<char,char> t2;
        for(int i=0;i<s.length();i++)
        {
            char a=s[i];
            char b=t[i];
            if(t1.count(a)!=0)
            {
                if(t1[a]!=b)
                {
                    return false;
                }
            }
            else
            {
                t1[a]=b;
            }
            if(t2.count(b)!=0) 
            {
                if(t2[b] != a)
                {
                    return false;
                }
            }
            else {
                t2[b] = a;
            }
        }
        return true;
    }
};