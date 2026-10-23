// Problem: ARRAYSORTED
// Platform: codechef
// Language: public static boolean check(int[] nums) {
        int n = nums.length;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                cnt++;
            }
        }
        return cnt <= 1;
    }
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/ARRAYSORTED?tab=solution
// Solved on: 2026-10-23T16:10:18.160Z

public static boolean check(int[] nums) {
        int n = nums.length;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                cnt++;
            }
        }
        return cnt <= 1;
    }