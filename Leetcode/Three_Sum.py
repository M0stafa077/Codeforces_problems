#  @file 3Sum.c
#  @author Mostafa Asaad (https://github.com/M0stafa077)
#  @brief Problem number 15 on Leetcode. 
class Solution:
    def threeSum(self, nums):
        def twoSum(nums, target):
            result = []
            l, r = 0, len(nums) - 1
            while l < r:
                if nums[l] + nums[r] == target:
                    result.append([nums[l], nums[r]])
                    while l < r and nums[l] == nums[l + 1]:
                        l += 1
                    while l < r and nums[r] == nums[r - 1]:
                        r -= 1
                    l += 1
                    r -= 1
                elif nums[l] + nums[r] > target:
                    r -= 1
                else:
                    l += 1
            return result

        nums.sort()
        result = []
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            pairs = twoSum(nums[i + 1:], -nums[i])
            for pair in pairs:
                result.append([nums[i]] + pair)
                
        return result


nums = [-2,0,1,1,2]
s = Solution()
x = s.threeSum(nums)
print(x)