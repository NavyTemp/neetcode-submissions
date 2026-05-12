class Solution {
public:
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> hsh;
    unordered_map<int,bool> hsh2;
    vector<int> unqs;
    vector<int> res;
    for(int i = 0 ; i < nums.size(); i ++)
    {
        if(hsh2[nums[i]] == false)
        {
            hsh2[nums[i]] = true;
            hsh[nums[i]] = 1;
            unqs.push_back(nums[i]);
        }
        else
            hsh[nums[i]] += 1;
    }
    
    // for(int i = 0 ; i <unqs.size(); i++)
    // {
    //     cout << unqs[i] << " - " << hsh[unqs[i]]<<endl;
    // }
    
    int min = -1000;
    for(int i = 0 ; i < unqs.size(); i++)
    {
        if(min > hsh[unqs[i]])
            min = hsh[unqs[i]] - 10;
    }
    for(int i = 0; i < k;i++){
        int max = min;
        int maxVal;
        for(int j = 0 ; j < unqs.size(); j++)
        {
            if(hsh[unqs[j]] > max)
            {
                max = hsh[unqs[j]];
                maxVal = unqs[j];
            }
        }
        res.push_back(maxVal);
        hsh[maxVal] = min;
    }
    
    // int mxInd = 0;
    // int minvalInd;
    // for(int i = 0 ; i < unqs.size(); i++)
    // {
    //     if(mxInd < k)
    //     {
    //         mxInd += 1;
    //         res.push_back(unqs[i]);
    //         if(mxInd == 1)
    //             minvalInd = 0;
    //         else
    //         {
    //             if(hsh[res[minvalInd]] > hsh[res[unqs[i]])
    //                 minvalInd = mxInd;
    //         }
    //     }
    //     else
    //     {
            
    //     }
    // }
    
    return res;
}
};
