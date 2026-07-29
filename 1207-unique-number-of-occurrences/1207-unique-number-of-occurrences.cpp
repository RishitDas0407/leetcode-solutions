class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int> mp;
        unordered_set<int> s;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto i:mp)
        {
            if(s.find(i.second)!=s.end())
            {
                return false;
            }
            s.insert(i.second);
        }
        return true;
    }
};