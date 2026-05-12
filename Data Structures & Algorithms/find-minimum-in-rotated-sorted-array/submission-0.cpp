class Solution {
public:
int findMin(vector<int> &nums) {
    int st = 0;
    int end = nums.size() - 1 ;
    if(nums[st] < nums[end])
        return nums[st];
    while(st != end)
    {
        //cout<<st<< " -> "<<nums[st]<< " "<<end<<" -> "<<nums[end] << endl;
        int mid = (st + end) / 2;
        if(nums[mid] < nums[end])
            end = mid;
        else
            st = mid;
        if(end - st == 1)
        {
            if(nums[end] < nums[st])
                st = end;
            else 
                end = st;
        }
    }
    return nums[st];
}
};
