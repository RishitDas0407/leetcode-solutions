class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        vector<int> hash(26,0);
        int n=magazine.size();
        for(int i=0;i<n;i++)
        {
            hash[magazine[i]-'a']++;
        }
        int m=ransomNote.size();
        for(char c:ransomNote)
        {
            if(hash[c-'a']==0)
            {
                return false;
            }
            hash[c-'a']--;
        }
        return true;
    }
};