class Solution(object):
    def maxJumps(self, arr, d):
        """
        :type arr: List[int]
        :type d: int
        :rtype: int
        """
        n = len(arr)
        dp = [1] * n
        for a, i in sorted([a, i] for i, a in enumerate(arr)):
            j = i - 1
            while j >= 0 and arr[j] < arr[i] and i - j <= d:
                dp[i] = max(dp[i], dp[j] + 1)
                j -= 1
            j = i + 1
            while j < n and arr[j] < arr[i] and j - i <= d:
                dp[i] = max(dp[i], dp[j] + 1)
                j += 1
        return max(dp)