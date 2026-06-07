public class Solution {
     public List<List<string>> GroupAnagrams(string[] strs)
        {
            Dictionary<string, List<string>> result = new Dictionary<string, List<string>>();
            foreach (var str in strs)
            {
                int[] values = new int[26];
                for (int i = 0; i < str.Length; i++)
                {
                    values[str[i] - 'a']++;
                }
                string valuesHash = string.Empty;
                for (int i = 0; i < values.Length; i++)
                {
                    valuesHash += values[i];
                    valuesHash += "#";
                }

                if (!result.ContainsKey(valuesHash))
                {
                    result[valuesHash] = new List<string>();
                }
                result[valuesHash].Add(str);
            }
    return result.Values.ToList();
        }
}
