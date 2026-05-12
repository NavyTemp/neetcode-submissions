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

int countSubstrings(string s)
{
    unordered_map<string,bool> hash;
    vector<string> arr;
    //string res = s.substr(0,1);
    for(int i = 0 ; i < s.size(); i++)
    {
        for(int j = i; j < s.size(); j++)
        {
            bool isPal = isPalindrom(s,i,j, hash);
            if(isPal)
            {
                arr.push_back(s.substr(i, j - i + 1));
            }
            // if(isPal && (j - i + 1) > res.size())
            // {
            //     res = s.substr(i, j - i + 1);
            // }
        }
    }
    return arr.size();
}

};
