// Problem: SESO42
// Platform: codechef
// Language: void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // Store the current element as key
        int j = i - 1;
        
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Insert the key at its correct position
        arr[j + 1] = key;
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH6/problems/SESO42?tab=solution
// Solved on: 2026-10-20T18:05:21.913Z

public static void insertionSort(int[] arr) {
    int n = arr.length;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
