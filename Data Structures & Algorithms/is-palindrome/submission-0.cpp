class Solution {
public:
    bool isPalindrome(string s) {
            string full = "";
    for(int i = 0 ; i < s.size(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') )
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 'a' - 'A';
            }
            full = full + s[i];
        }
    }
    int ind1 = 0;
    int ind2 = full.size() - 1;
    while(ind1 < ind2)
    {
        if(full[ind1] != full[ind2])
            return false;
        ind1 += 1;
        ind2 -= 1;
    }
    return true;
    }
};
