class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
     vector<int> arr(cost.size(),0);
     for(int i = cost.size() -1 ; i >= 0; i--)
     {
         int c = cost[i];
         if(i == cost.size() - 1 || i == cost.size() - 2)
         {
             arr[i] = c;
         }
         else
         {
             arr[i] = c + min(arr[i+1],arr[i+2]);
         }
     }
     return min(arr[0],arr[1]);
}
};
