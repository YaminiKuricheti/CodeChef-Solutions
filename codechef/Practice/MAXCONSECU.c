// Problem: MAXCONSECU
// Platform: codechef
// Language: public static int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;     // current streak
        int maxCount = 0;  // maximum streak

        for (int num : nums) {
            if (num == 1) {
                count++;
                maxCount = Math.max(maxCount, count);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYS/problems/MAXCONSECU?tab=solution
// Solved on: 2026-10-23T15:47:49.319Z

    public static int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;     // current streak
        int maxCount = 0;  // maximum streak

        for (int num : nums) {
            if (num == 1) {
                count++;
                maxCount = Math.max(maxCount, count);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
