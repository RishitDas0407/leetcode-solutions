class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int maxy = 0;
        for(string s : sentences)
        {
            int count = 1;
            for(char c : s)
            {
                if(c == ' ')
                {
                    count++;
                }
            }
            maxy = max(maxy, count);
        }
        return maxy;
    }
};