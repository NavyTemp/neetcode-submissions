class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
             unordered_map<int,bool> exts;
     vector<int> uns;
    for(int i = 0 ; i < nums.size(); i++)
    {
        if(exts[nums[i]] == false)
        {
            exts[nums[i]] = true;
            uns.push_back(nums[i]);
        }
    }
    
    unordered_map<int,bool> trv;
    unordered_map<int,int> maxs;
    int max = 0;
    for(int i = 0 ; i < uns.size(); i++)
    {
       bool flag = exts[uns[i]];
       int val = uns[i];
       int currMax = 0;
       while(flag)
       {
           if(trv[val] == true)
           {
               currMax += maxs[val];
               maxs[uns[i]] = currMax;
               flag = false;
           }
           else
           {
               currMax += 1;
               trv[val] = true;
               val += 1;
               flag = exts[val];
           }
       }
       maxs[uns[i]] = currMax;
       if(currMax > max)
            max = currMax;
    }
    return max;
    }
};
