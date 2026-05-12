class Solution {
public:
bool isPalindrom(string str, int st, int end)
{
    while(st <= end)
    {
        if(str[st] == str[end])
        {
            st += 1;
            end -= 1;    
        }
        else
        {
            return false;
        }
    }
    return true;
}

string longestPalindrome(string s)
{
    string res = s.substr(0,1);;
    for(int i = 0 ; i < s.size(); i++)
    {
        for(int j = i+1; j < s.size(); j++)
        {
            bool isPal = isPalindrom(s,i,j); 
            if(isPal && (j - i + 1) > res.size())
            {
                res = s.substr(i, j - i + 1);
            }
        }
    }
    return res;
}
};
