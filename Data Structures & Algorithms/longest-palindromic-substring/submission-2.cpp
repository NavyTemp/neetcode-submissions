class Solution {
public:
bool isPalindrom(string str, int st, int end, unordered_map<string,bool> hash)
{
    int start = st;
    int endd = end;
    while(st <= end)
    {
        if(hash[str.substr(st, end - st + 1)])
        {
            break;
        }
        if(str[st] == str[end])
        {
            st += 1;
            end -= 1;    
        }
        else
        {
            hash[str.substr(start, endd - start + 1)] = false;
            return false;
        }
    }
    hash[str.substr(start, endd - start + 1)] = true;
    return true;
}

string longestPalindrome(string s)
{
    unordered_map<string,bool> hash;
    string res = s.substr(0,1);
    for(int i = 0 ; i < s.size(); i++)
    {
        for(int j = i+1; j < s.size(); j++)
        {
            bool isPal = isPalindrom(s,i,j, hash); 
            if(isPal && (j - i + 1) > res.size())
            {
                res = s.substr(i, j - i + 1);
            }
        }
    }
    return res;
}

};
