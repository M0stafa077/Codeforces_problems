#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    
    inline bool isClosing(char s)
    {
        return (s == ')' || s == '}' || s == ']');
    }
    
    inline  bool isOpening(char s)
    {
        return ((s == '(' || s == '{' || s == '['));
    }
    
    bool doesMatch(char a, char b)
    {
        if (('(' == a) && (')' == b))
        {
            return true;
        }
        
        else if (('{' == a) && ('}' == b))
        {
            return true;
        }

        else if (('[' == a) && (']' == b))
        {
            return true;
        }

        else
        {
            return false;
        }    

        return false;
    }

    bool isValid(string s) 
    {
        stack<char> stack;
        for(int i = 0; i < s.size(); ++i)
        {
            if(isOpening(s[i]))
            {
                stack.push(s[i]);
            }
            else if (isClosing(s[i]))
            {
                if(stack.empty())
                {
                    return false;
                }
                else
                {
                    char x = stack.top();
                    stack.pop();
                    if(!doesMatch(x, s[i]))
                    {
                        return false;
                    }
                    else
                    { /* Nothing */ }
                }
            }
        }
        return stack.empty();
    }  
};