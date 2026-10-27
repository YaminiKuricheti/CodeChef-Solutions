// Problem: DSAAGP1098
// Platform: codechef
// Language: public static boolean check(int[] arr, int d, int n, int c) {
    c--;
    int prev = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] - prev >= d) {
            c--;
            prev = arr[i];
        }
        if (c == 0) return true;
    }
    return false;
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP03/problems/DSAAGP1098?tab=solution
// Solved on: 2026-10-27T16:33:04.232Z

public static boolean check(int[] arr, int d, int n, int c) {
    c--;
    int prev = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] - prev >= d) {
            c--;
            prev = arr[i];
        }
        if (c == 0) return true;
    }
    return false;
}