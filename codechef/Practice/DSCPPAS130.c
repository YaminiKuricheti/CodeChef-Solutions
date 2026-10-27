// Problem: DSCPPAS130
// Platform: codechef
// Language: public static int firstOccurrence(int[] arr, int n, int target) {
    int left = 0, right = n;
    while (right - left > 1) {
        int middle = (right + left) / 2;
        if (arr[middle] >= target) right = middle;
        else left = middle;
    }
    return right;
}

public static int lastOccurrence(int[] arr, int n, int target) {
    int left = 0, right = n;
    while (right - left > 1) {
        int middle = (right + left) / 2;
        if (arr[middle] > target) right = middle;
        else left = middle;
    }
    return left;
}
public static int countOccurrences(int[] arr, int n, int target) {
    return lastOccurrence(arr, n, target) - firstOccurrence(arr, n, target) + 1;
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP03/problems/DSCPPAS130?tab=solution
// Solved on: 2026-10-27T16:32:43.758Z

public static int firstOccurrence(int[] arr, int n, int target) {
    int left = 0, right = n;
    while (right - left > 1) {
        int middle = (right + left) / 2;
        if (arr[middle] >= target) right = middle;
        else left = middle;
    }
    return right;
}

public static int lastOccurrence(int[] arr, int n, int target) {
    int left = 0, right = n;
    while (right - left > 1) {
        int middle = (right + left) / 2;
        if (arr[middle] > target) right = middle;
        else left = middle;
    }
    return left;
}
public static int countOccurrences(int[] arr, int n, int target) {
    return lastOccurrence(arr, n, target) - firstOccurrence(arr, n, target) + 1;
}