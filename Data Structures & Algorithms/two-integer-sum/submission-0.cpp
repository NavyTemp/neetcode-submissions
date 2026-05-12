class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
   unordered_map<int,int> hsh;
   unordered_map<int,bool> hsh2;
   
   for(int i = 0; i < nums.size(); i++)
   {
       if(hsh2[target - nums[i]] == false)
       {
           hsh[nums[i]] = i;
           hsh2[nums[i]] = true;
       }
       else
       {
           vector<int> res {hsh[target - nums[i]],i};
           return res;
       }
   }
   return nums;
}

};
