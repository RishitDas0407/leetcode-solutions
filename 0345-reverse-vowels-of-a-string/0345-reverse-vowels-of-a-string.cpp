class Solution {
public:
    bool isVowel(char c)
    {
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) 
    {
        
        int n=s.size();
        int left=0;
        int right=n-1;
        while(left<right)
        {
            while(left<right && isVowel(s[left])==false)
            {
                left++;
            }
            while(left<right && isVowel(s[right])==false)
            {
                right--;
            }
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
        return s;
    }
};