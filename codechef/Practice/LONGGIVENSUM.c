// Problem: LONGGIVENSUM
// Platform: codechef
// Language: class Solution {
    public int longestSubarraySum(int[] nums, int k) {
        Map<Long, Integer> prefixIndex = new HashMap<>();
        long prefixSum = 0;
        int maxLen = 0;

        for (int i = 0; i < nums.length; i++) {
            prefixSum += nums[i];

            // Case: subarray from 0 to i
            if (prefixSum == k) {
                maxLen = i + 1;
            }

            // Case: subarray ending at i
            if (prefixIndex.containsKey(prefixSum - k)) {
                maxLen = Math.max(maxLen, i - prefixIndex.get(prefixSum - k));
            }

            // Store only first occurrence
            prefixIndex.putIfAbsent(prefixSum, i);
        }

        return maxLen;
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/LONGGIVENSUM?tab=solution
// Solved on: 2026-10-24T06:31:56.710Z

class Solution {
    public int longestSubarraySum(int[] nums, int k) {
        Map<Long, Integer> prefixIndex = new HashMap<>();
        long prefixSum = 0;
        int maxLen = 0;

        for (int i = 0; i < nums.length; i++) {
            prefixSum += nums[i];

            // Case: subarray from 0 to i
            if (prefixSum == k) {
                maxLen = i + 1;
            }

            // Case: subarray ending at i
            if (prefixIndex.containsKey(prefixSum - k)) {
                maxLen = Math.max(maxLen, i - prefixIndex.get(prefixSum - k));
            }

            // Store only first occurrence
            prefixIndex.putIfAbsent(prefixSum, i);
        }

        return maxLen;
    }
}