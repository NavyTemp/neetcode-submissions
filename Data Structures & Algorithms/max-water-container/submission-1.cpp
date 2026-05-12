class Solution {
public:
int maxArea(vector<int>& heights) {
    int l = 0;
    int r = heights.size() -1;
    int max = min(heights[l], heights[r]) * (r - l);
    while(r > l)
    {
        int m = min(heights[l], heights[r]) * (r - l);
        if (m > max)
            max = m;
        if(heights[l] > heights[r])
            r -= 1;
        else if(heights[l] < heights[r])
            l += 1;
        else if(heights[l + 1] > heights[r - 1])
            l += 1;
        else 
            r -= 1;
    }
    return max;
}

};
