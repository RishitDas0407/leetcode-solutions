class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> hash;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto &i:hash)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.rbegin(),v.rend());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};