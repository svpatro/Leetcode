# Problem: Two Sum
# O(n^2) solution

class Solution(object):
    def twoSum(self, nums, target):
        solutions = []
        for i in range(0, len(nums) - 1):
                       for j in range(i, len(nums)):
                               if (i == j):
                                       j += 1
                               elif (nums[i] + nums[j] == target):
                                       solutions.append(i)
                                       solutions.append(j)
        return solutions
        