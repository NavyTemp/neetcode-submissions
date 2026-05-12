class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    if(strs.size() == 1)
    {
        vector<vector<string>> res;
        res.push_back(strs);
        return res;
    }
    unordered_map<int,unordered_map<int,unordered_map<int,int>>> hsh;
    unordered_map<int,unordered_map<int,unordered_map<int,bool>>> hsh2;
    vector<vector<string>> res;
    int maxInd = 0;
    for(int i = 0 ; i <strs.size(); i++)
    {
        int sum= 0;
        int mul = 1;
        int by2 = 0;
        for(int j = 0; j < strs[i].size();j++)
        {
            sum += strs[i][j];
            mul *= strs[i][j];
            by2 += (2 * strs[i][j]);
        }
        if(hsh2[sum][mul][by2] == false)
        {
            hsh2[sum][mul][by2] = true;
            vector<string> grp;
            grp.push_back(strs[i]);
            res.push_back(grp);
            hsh[sum][mul][by2] = maxInd;
            maxInd += 1;
        }
        else 
        {
            res[hsh[sum][mul][by2]].push_back(strs[i]);
        }
    }
    return res;
}

};
