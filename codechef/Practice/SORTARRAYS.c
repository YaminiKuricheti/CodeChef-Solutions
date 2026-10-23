// Problem: SORTARRAYS
// Platform: codechef
// Language: public static void sortColors(int[] nums) {
   //write code...
    int low = 0, mid = 0, high = nums.length - 1;

        while (mid <= high) {

            if (nums[mid] == 0) {
                swap(nums, low, mid);
                low++;
                mid++;
            }

            else if (nums[mid] == 1) {
                mid++;
            }

            else {
                swap(nums, mid, high);
                high--;
            }
        }
}
private static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/SORTARRAYS?tab=solution
// Solved on: 2026-10-23T16:30:44.562Z

public static void sortColors(int[] nums) {
   //write code...
    int low = 0, mid = 0, high = nums.length - 1;

        while (mid <= high) {

            if (nums[mid] == 0) {
                swap(nums, low, mid);
                low++;
                mid++;
            }

            else if (nums[mid] == 1) {
                mid++;
            }

            else {
                swap(nums, mid, high);
                high--;
            }
        }
}
private static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }