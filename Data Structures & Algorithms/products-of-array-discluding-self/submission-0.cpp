class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> arr1(nums.size() + 2, 1);
    vector<int> arr2(nums.size() + 2, 1);
    for(int i = 0 ; i < nums.size(); i++)
    {
        arr1[i + 1] = arr1[i] * nums[i];
    }
    for(int i = nums.size() - 1 ; i >= 0; i--)
    {
        arr2[i + 1] = arr2[i + 2] * nums[i];
    }
    vector<int> res;
    for(int i = 0 ; i < nums.size(); i++)
    {
        res.push_back(arr1[i] * arr2[i + 2]);
    }
    return res;
    }
};
