#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:

    bool containsDuplicate(vector<int>& nums) 
    {
        set<int> numsSet;
        set<int>::iterator it;
        for(int i = 0; i < nums.size(); ++i)
        {
            it = numsSet.find(nums.at(i));
            
            if(it != numsSet.end())
                { return true; }
            else
                { numsSet.insert(nums.at(i)); }
        }
        return false;
    }
};

int main()
{

}