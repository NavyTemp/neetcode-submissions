public class Solution {
    public bool hasDuplicate(int[] nums) {
        Dictionary<int,int> ints = new Dictionary<int,int>();
        foreach(var i in nums)
        {
            if(ints.ContainsKey(i))
                return true;
            ints[i] = 1;
        }
        return false;
    }
}