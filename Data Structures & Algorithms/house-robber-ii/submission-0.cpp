class Solution {
public:
int rob1(vector<int>& nums) {
    vector<int>arr(nums.size(),0);
    arr[nums.size() - 1] = nums[nums.size() - 1];
    if(arr.size() > 1)
        arr[nums.size() - 2] = nums[nums.size() - 2];
    if(arr.size() > 2)
        arr[nums.size() - 3] = nums[nums.size() - 3] + nums[nums.size() - 1];
    for(int i = nums.size() - 4; i >= 0; i--)
    {
        arr[i] = nums[i] + max(arr[i + 2], arr[i + 3]);
    }
    return max(arr[0],arr[1]);
}

    int rob(vector<int>& nums) {
    if(nums.size() == 1)
        return nums[0];
    vector<int> arr1(nums.begin(),nums.end()-1);
    vector<int> arr2(nums.begin()+1,nums.end());
    int val1 = rob1(arr1);
    int val2 = rob1(arr2);
    return max(val1,val2);
}
};
