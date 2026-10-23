// Problem: REMOVEDUPLIC
// Platform: codechef
// Language: public static int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;

        int j = 0; // pointer for unique elements
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1; // count of unique elements
    }
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/REMOVEDUPLIC?tab=solution
// Solved on: 2026-10-23T16:12:56.564Z

    public static int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;

        int j = 0; // pointer for unique elements
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1; // count of unique elements
    }
