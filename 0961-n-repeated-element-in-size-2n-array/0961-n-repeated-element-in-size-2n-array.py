class Solution(object):
    def repeatedNTimes(self, nums):
        n = len(nums) // 2
        result = -1

        freq = {}
        for num in nums:
            freq[num] = freq.get(num, 0) + 1
            if freq[num] == n:
                result = num

        return result    