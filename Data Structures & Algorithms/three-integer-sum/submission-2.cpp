class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
    if(nums.size() < 3)
    {
       vector<int> arr {};
       vector<vector<int>> res = {arr};
       return res;
    }
    sort(nums.begin(),nums.end());
    vector<vector<int>> res;
    for(int i = 0 ; i < nums.size() - 2; i++)
    {
        if(i != 0 && nums[i] == nums[i - 1])
            continue;
        int r = nums.size() -1;
        int l = i + 1;
        bool flag = true;
        while(flag)
        {
            if(l == r  || r < l)
            {
                flag = false;
                break;
            }
            else if(nums[l] + nums[r] > -1 * nums[i])
            {
                r -= 1;
            }
            else if(nums[l] + nums[r] < -1 * nums[i])
            {
                l += 1;
            }
            else
            {
                vector<int> arr {nums[i],nums[l],nums[r]};
                res.push_back(arr);
                int L = l;
                int R = r;
                l += 1;
                r -= 1;
                if(nums[l] == nums[l -1] && nums[r] == nums[r + 1])
                {
                    bool exit = false;
                    while(nums[l] == nums[L])
                    {
                        l += 1;
                        if (l >= nums.size() - 1)
                        {
                            exit = true;
                            break;
                        }
                    }
                    if(exit)
                        break;
                    while(nums[r] == nums[R])
                    {
                        r -= 1;
                        if (r == l)
                        {
                            exit = true;
                            break;
                        }
                    }
                    if(exit)
                        break;
                }
            }
        }
    }
    return res;
}

};
