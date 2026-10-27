// Problem: UPPERBOUND1
// Platform: codechef
// Language: static int upperBound(int[] nums, int x) {
        int low = 0, high = nums.length;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= x) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP06/problems/UPPERBOUND1?tab=solution
// Solved on: 2026-10-27T16:39:29.191Z

 static int upperBound(int[] nums, int x) {
     //write code here...
 }