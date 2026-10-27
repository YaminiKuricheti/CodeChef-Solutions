// Problem: LOWERBOUND1
// Platform: codechef
// Language: static int solve(int[] nums, int x) {
        int low = 0, high = nums.length;
        while (low < high) {
            int mid = (low + high) / 2;
            if (nums[mid] < x) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP06/problems/LOWERBOUND1?tab=solution
// Solved on: 2026-10-27T16:38:01.541Z

 static int solve(int[] nums, int x) {
     //write logic here...
 }