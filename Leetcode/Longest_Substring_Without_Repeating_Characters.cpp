/**
 * @file    Longest_Substring_Without_Repeating_Characters.cpp
 * @author  Mostafa Asaad (https://github.com/M0stafa077)
 * @brief   Problem number 3 on Leetcode.
 *              => Sliding Window <=
 */
#include <iostream>
#include <set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) 
    {
        std::set<char> subString;
        int l = 0, r = 0;
        int res = 0;
        
        for(r = 0; r < s.size(); ++r)
        {
            while (subString.find(s[r]) != subString.end()) 
                { subString.erase(s[l++]); }
            subString.insert(s[r]);
            res = std::max(res, (r - l + 1));
        }
        return res;
    }
};  

int main()
{
    std::string s = "abcabcbb";
    Solution sol = Solution();

    std::cout << "Result: " << sol.lengthOfLongestSubstring(s) << '\n';

    return 0;
}