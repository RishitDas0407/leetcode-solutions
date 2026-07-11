class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        vector<int> hash(58,0);
        int n=stones.size();
        for(int i=0;i<n;i++)
        {
            hash[stones[i]-'A']++;
        }
        int m=jewels.size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            count+=hash[jewels[i]-'A'];
        }
        return count;
    }
};