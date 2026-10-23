// Problem: PROBLEM LINK:
// Platform: codechef
// Language: for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    print(n - a.count(min(a)))
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN?tab=solution
// Solved on: 2026-10-23T15:39:34.922Z

class Solution {
    public int countNonMinimum(int[] nums) {
        if (nums.length == 0) return 0;

        int minimum = nums[0];
        int countMin = 0;

        // Find minimum
        for (int num : nums) {
            if (num < minimum) minimum = num;
        }

        // Count occurrences of minimum
        for (int num : nums) {
            if (num == minimum) countMin++;
        }

        return nums.length - countMin;
    }
}
