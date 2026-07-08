class Solution {
public:
    bool isPalindrome(string s) 
    {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                ans.push_back(tolower(s[i]));
            }
        }
        int left=0;
        int right=ans.size()-1;
        while(left<=right)
        {
            if(ans[left]!=ans[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};