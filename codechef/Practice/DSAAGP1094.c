// Problem: DSAAGP1094
// Platform: codechef
// Language: public static int searchInsertPosition(int[] arr, int n, int k) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int middle = (left + right) / 2;
        if (arr[middle] == k) {
            return middle;
        } else if (arr[middle] > k) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    return left;
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP01/problems/DSAAGP1094?tab=solution
// Solved on: 2026-10-27T16:30:31.997Z

public static int searchInsertPosition(int[] arr, int n, int k) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int middle = (left + right) / 2;
        if (arr[middle] == k) {
            return middle;
        } else if (arr[middle] > k) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    return left;
}