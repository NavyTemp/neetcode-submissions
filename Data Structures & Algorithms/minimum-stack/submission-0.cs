public class MinStack {
    private int[] stack;
    private int[] minStack;
    private int top;

    public MinStack() 
    {
        stack = new int[10000];
        minStack = new int[10000];
        top = -1;
    }
    
    public void Push(int val) 
    {
        top++;
        stack[top] = val;

        if (top == 0)
            minStack[top] = val;
        else
        {
            minStack[top] = Math.Min(val ,minStack[top - 1]);
        }    
    }
    
    public void Pop() 
    {
        top--;
    }
    
    public int Top() 
    {
        return stack[top];
    }
    
    public int GetMin() 
    {
        return minStack[top];
    }
}
