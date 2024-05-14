/**
 * @file Longest_Common_Prefix.cpp
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 14 on Leetcode. 
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
    public:
        string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string   s2 = strs[strs.size()-1];
        
        int index = 0;

        while(index<s1.size() && index<s2.size()){
            if(s1[index] == s2[index]){
                ++index;
            }
            else  
                break;
        }

        return s2.substr(0,index);
    }
};