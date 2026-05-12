class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool> hsh;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(hsh[nums[i]] == false)
                hsh[nums[i]] = true;
            else
                return true;
        }
        return false;
    }
};
