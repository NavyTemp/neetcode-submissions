class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ind1 = 0;
        int ind2 = numbers.size() - 1;
        // while(numbers[ind2] > target)
        //     ind2 -= 1;
        while(numbers[ind1] + numbers[ind2] != target)
        {
            if(numbers[ind1] + numbers[ind2] > target)
                ind2 -= 1;
            else if (numbers[ind1] + numbers[ind2] < target)
                ind1 += 1;
        }
        return vector<int>{ind1 + 1,ind2 + 1}; 
    }
};
