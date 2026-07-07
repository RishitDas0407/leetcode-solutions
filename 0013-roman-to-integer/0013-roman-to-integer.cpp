class Solution {
public:
    int romanToInt(string s) 
    {
        int count=0;
        int n=s.size();
        unordered_map<char, int> roman={
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};
        for (int i=0;i<n;i++)
        {
            if(i+1<n && roman[s[i]]<roman[s[i+1]])
            {
                count=count-roman[s[i]];
            }
            else
            {
                count=count+roman[s[i]];
            }
        }
        return count;
    }
};