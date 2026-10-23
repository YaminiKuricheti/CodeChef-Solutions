// Problem: SINGLENUM
// Platform: codechef
// Language: class Solution {
    public int singleNumber(int[] nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // XOR accumulates the unique number
        }
        return result;
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/SINGLENUM?tab=solution
// Solved on: 2026-10-23T16:07:08.551Z

class Solution {
    public int singleNumber(int[] nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // XOR accumulates the unique number
        }
        return result;
    }
}