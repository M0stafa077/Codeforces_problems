/**
 * @file Contains_Dublicates_II.cpp
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 219 on Leetcode. 
*/
#include <iostream>
#include <set>
#include <vector>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) 
    {
        std::set<int> hashSet;
        int l = 0, r = 0;

        while (r < nums.size())
        {
            if(hashSet.insert(nums.at(r++)).second)
                { if(r - l > k) hashSet.erase(nums.at(l++)); }
            else
                { return true; }
        }
        return false;
    }
};

int main()
{
    std::vector<int> nums = {1, 2, 3, 1, 2, 3};
    int k = 2; 

    printf("Result: ");

    Solution sol;
    std::cout << sol.containsNearbyDuplicate(nums, k) ? "True\n" : "False\n";
    std::cout << "Expected Result is False\n";
    
    return 0;
}