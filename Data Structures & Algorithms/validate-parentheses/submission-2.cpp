class Solution {
public:
    bool isValid(string s) {
        stack<char> pranth;
        vector<char> arr;
        for (int i = 0; i < s.length(); i++){
            arr.push_back(s[i]);
        }
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] == '{' || arr[i] == '[' || arr[i] == '('){
                pranth.push(arr[i]);
            }else{
                if (pranth.empty()){
                    return false;
                }
                if (pranth.top() == '[' && arr[i] == ']' ||
                pranth.top() == '(' && arr[i] == ')' ||
                pranth.top() == '{' && arr[i] == '}'){
                    pranth.pop();
                }
                
                else{
                    return false;
                }
            }
        }
        
        return pranth.empty();
        
    }
};
