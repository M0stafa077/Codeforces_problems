#include <iostream>
#include <stack>

using namespace std;

class MyQueue 
{
private :
    stack <int> main_stack;    
    stack <int> sec_stack;
public:
    MyQueue() 
    {}
    
    void push(int x) 
    {
        /* 1. Copy the elements of the main stack into the secondary stack */
        while (!main_stack.empty()) 
        {
            sec_stack.push(main_stack.top());
            main_stack.pop();
        }
        /* 2. Push the new value into the main stack */
        main_stack.push(x);
        /* 3. Copy the elements of the secondary stack back into the main stack */
        while (!sec_stack.empty()) 
        {
            main_stack.push(sec_stack.top());
            sec_stack.pop();
        }
    }
    
    int pop() 
    {
        int x = main_stack.top();
        main_stack.pop();
        return x;
    }
    
    int peek() 
    {
        return main_stack.top();
    }
    
    bool empty() 
    {
        return main_stack.empty();    
    }
};

int main ()
{
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
}
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */