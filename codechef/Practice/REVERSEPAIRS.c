// Problem: REVERSEPAIRS
// Platform: codechef
// Language: class Solution {
    public int merge(int[] nums, int low, int mid, int high) {
        int count = 0;
        int j = mid + 1;

        // Count reverse pairs
        for (int i = low; i <= mid; i++) {
            while (j <= high && (long) nums[i] > 2L * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        // Merge step
        int n1 = mid - low + 1;
        int n2 = high - mid;

        int[] left = new int[n1];
        int[] right = new int[n2];

        for (int i = 0; i < n1; i++)
            left[i] = nums[low + i];

        for (int i = 0; i < n2; i++)
            right[i] = nums[mid + 1 + i];

        int i = 0, k = low, l = 0;

        while (i < n1 && l < n2) {
            if (left[i] <= right[l]) {
                nums[k++] = left[i++];
            } else {
                nums[k++] = right[l++];
            }
        }

        while (i < n1)
            nums[k++] = left[i++];

        while (l < n2)
            nums[k++] = right[l++];

        return count;
    }

    public int mergeSort(int[] nums, int low, int high) {
        if (low >= high)
            return 0;

        int mid = low + (high - low) / 2;
        int count = 0;

        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid + 1, high);
        count += merge(nums, low, mid, high);

        return count;
    }

    public int reversePairs(int[] nums) {
        return mergeSort(nums, 0, nums.length - 1);
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/REVERSEPAIRS?tab=solution
// Solved on: 2026-10-24T06:39:42.213Z

class Solution {
    public int merge(int[] nums, int low, int mid, int high) {
        int count = 0;
        int j = mid + 1;

        // Count reverse pairs
        for (int i = low; i <= mid; i++) {
            while (j <= high && (long) nums[i] > 2L * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        // Merge step
        int n1 = mid - low + 1;
        int n2 = high - mid;

        int[] left = new int[n1];
        int[] right = new int[n2];

        for (int i = 0; i < n1; i++)
            left[i] = nums[low + i];

        for (int i = 0; i < n2; i++)
            right[i] = nums[mid + 1 + i];

        int i = 0, k = low, l = 0;

        while (i < n1 && l < n2) {
            if (left[i] <= right[l]) {
                nums[k++] = left[i++];
            } else {
                nums[k++] = right[l++];
            }
        }

        while (i < n1)
            nums[k++] = left[i++];

        while (l < n2)
            nums[k++] = right[l++];

        return count;
    }

    public int mergeSort(int[] nums, int low, int high) {
        if (low >= high)
            return 0;

        int mid = low + (high - low) / 2;
        int count = 0;

        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid + 1, high);
        count += merge(nums, low, mid, high);

        return count;
    }

    public int reversePairs(int[] nums) {
        return mergeSort(nums, 0, nums.length - 1);
    }
}