class Solution {
public:
bool isAnagram(string s, string t) {
    if(s.size() != t.size())
        return false;
    vector<int> ltrs('z'-'a' + 1 ,0);
    for(int i = 0; i < s.size(); i++)
    {
        ltrs[s[i] - 'a'] += 1;
    }
    for(int i = 0; i < t.size(); i++)
    {
        ltrs[t[i] - 'a'] -= 1;
        if(ltrs[t[i] - 'a'] < 0)
            return false;
    }
    return true;
    
}
};
