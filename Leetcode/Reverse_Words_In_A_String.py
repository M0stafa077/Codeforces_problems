# /**
#  * @file Reverse_Words_In_A_String.py
#  * @author Mostafa Asaad (https://github.com/M0stafa077)
#  * @brief Problem number 151 on Leetcode. 
# */

class Solution(object):
    def reverseWords(self, s) -> str:
        """
        :type s: str
        :rtype: str
        """
        stack = []
        current_str:str = ""
        r = 0
        
        while r < len(s):            
            while (r < len(s)) and (s[r] == ' '):
                r += 1

            while (r < len(s)) and (s[r] != ' '):
                current_str += s[r]
                r += 1

            if current_str != "":
                stack.append(current_str + ' ')
            current_str = ""
        
        res:str = ""
        for _ in range(0, len(stack)):
            res += stack.pop()

        return res[:-1]
    
if __name__ == '__main__':
    sol = Solution()
    print("\""+ sol.reverseWords("a good   example") + "\"")
    