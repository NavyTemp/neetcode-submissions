public class Solution {
    public bool IsAnagram(string s, string t) {
        if(s.Length != t.Length)
            return false ;
        int [] numbers = new int [26];
        for (int i = 0; i < s.Length; i++)
        {
            numbers[s[i] - 'a']++;
            numbers[t[i] - 'a']--;
        }  

        for(int i = 0 ; i < 26 ; i++)
        {
            if(numbers[i] != 0)
                return false;
        }
        return true;
    }
}
