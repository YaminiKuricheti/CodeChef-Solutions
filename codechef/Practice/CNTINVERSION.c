// Problem: CNTINVERSION
// Platform: codechef
// Language: public static long countInversion(int[] arr, int n) {

    // Helper function to perform merge sort and count inversions
    return mergeSort(arr, new int[n], 0, n - 1);
}

// Recursive merge sort function
private static long mergeSort(int[] arr, int[] temp, int left, int right) {
    long invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Count inversions in left half
        invCount += mergeSort(arr, temp, left, mid);
        // Count inversions in right half
        invCount += mergeSort(arr, temp, mid + 1, right);
        // Count cross inversions during merge
        invCount += merge(arr, temp, left, mid, right);
    }
    return invCount;
}

// Merge two sorted halves and count cross inversions
private static long merge(int[] arr, int[] temp, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    long invCount = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            invCount += (mid - i + 1); // Count inversions
        }
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (i = left; i <= right; i++) arr[i] = temp[i];

    return invCount;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/CNTINVERSION?tab=solution
// Solved on: 2026-10-24T06:39:18.256Z

public static long countInversion(int[] arr, int n) {

    // Helper function to perform merge sort and count inversions
    return mergeSort(arr, new int[n], 0, n - 1);
}

// Recursive merge sort function
private static long mergeSort(int[] arr, int[] temp, int left, int right) {
    long invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Count inversions in left half
        invCount += mergeSort(arr, temp, left, mid);
        // Count inversions in right half
        invCount += mergeSort(arr, temp, mid + 1, right);
        // Count cross inversions during merge
        invCount += merge(arr, temp, left, mid, right);
    }
    return invCount;
}

// Merge two sorted halves and count cross inversions
private static long merge(int[] arr, int[] temp, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    long invCount = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            invCount += (mid - i + 1); // Count inversions
        }
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (i = left; i <= right; i++) arr[i] = temp[i];

    return invCount;
}
