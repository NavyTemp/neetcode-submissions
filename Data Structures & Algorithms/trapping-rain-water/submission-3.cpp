class Solution {
public:
int trap(vector<int>& height) {
    if(height.size() <= 2)
        return 0;
    int l = 0;
    int r = height.size() - 1;
    while(height[l] < height[l + 1] && l < r)
        l += 1;
    while(height[r] < height[r - 1] && l < r)
        r -= 1;
    bool smalL = height[l] <= height[r];
    int totalArea = 0;
    int currentArea = 0;
    int hl = height[l];
    int hr = height[r];
    while(r > l)
    {

        if(smalL)
        {
            if(hl > height[l + 1])
            {
                currentArea += (hl - height[l + 1]);
                l += 1;
            }
            else
            {
                totalArea += currentArea;
                currentArea = 0;
                smalL = height[l + 1] <= hr;
                l += 1;
                hl =  height[l];
            }
        }
        else
        {
            if(hr > height[r - 1])
            {
                currentArea += (hr - height[r - 1]);
                r -= 1;
            }
            else
            {
                totalArea += currentArea;
                currentArea = 0;
                smalL = hl <=  height[r - 1];
                r -= 1;
                hr =  height[r];
            }
        }
    }
    return totalArea;
}


};
