/**
 * @file Longest_Consecuitive_Sequence.cpp
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 128 on Leetcode. 
 *          => [ O(N) Solution ] <=
*/
#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        set<int> hashSet;
        int i = 0, numsSize = nums.size();
        int longest_sub_sequent = 0, current_sub_sequent = 1;

        for(i = 0; i <numsSize; ++i)
            { hashSet.insert(nums.at(i)); }

        set<int>::iterator it = hashSet.begin();
        for( ; it != hashSet.end(); ++it)
        {
            if(hashSet.find(*it + 1) == hashSet.end())
                { current_sub_sequent = 1; }
            else
                { ++current_sub_sequent; }
            
            longest_sub_sequent = max(longest_sub_sequent, current_sub_sequent);
        }
        return longest_sub_sequent;
    }
};


int main()
{
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    Solution sol;
    cout << "Result " << sol.longestConsecutive(nums) << '\n';
    return 0;
}