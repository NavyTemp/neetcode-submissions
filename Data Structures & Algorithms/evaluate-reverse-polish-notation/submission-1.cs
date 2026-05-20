public class Solution {
    public int EvalRPN(string[] tokens)
    {
        Stack<int> stack = new Stack<int>();

        for(int i = 0; i < tokens.Length; i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*")
            {
                int a = stack.Pop();
                int b = stack.Pop();

                switch(tokens[i])
                {
                    case "+": stack.Push(a + b); break;
                    case "-": stack.Push(b - a); break;
                    case "/": stack.Push(b / a); break;
                    case "*": stack.Push(a * b); break;
                }
            }
            else
            {
                stack.Push(int.Parse(tokens[i]));
            }
        }
        return stack.Pop();
    }
}
