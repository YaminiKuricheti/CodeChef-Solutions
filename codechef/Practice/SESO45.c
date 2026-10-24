// Problem: SESO45
// Platform: codechef
// Language: void countingSort(vector<int>& arr) {
    if (arr.empty()) return;  // Edge case: If the array is empty, there's nothing to sort

    // Find the maximum value in the array
    int max_val = *max_element(arr.begin(), arr.end());
    
    // Create a count array to store the frequency of each value
    vector<int> count(max_val + 1, 0);

    // Count the occurrences of each value in the array
    for (int num : arr) {
        count[num]++;
    }

    // Reconstruct the sorted array using the count array
    int sorted_index = 0;
    for (int i = 0; i <= max_val; ++i) {
        while (count[i] > 0) {
            arr[sorted_index++] = i;
            count[i]--;
        }
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH9/problems/SESO45?tab=solution
// Solved on: 2026-10-24T07:06:09.299Z

public static void countingSort(int[] arr) {
    if (arr.length == 0) return;

    int max_val = Arrays.stream(arr).max().getAsInt();
    int[] count = new int[max_val + 1];

    for (int num : arr) {
        count[num]++;
    }

    int sorted_index = 0;
    for (int i = 0; i <= max_val; ++i) {
        while (count[i] > 0) {
            arr[sorted_index++] = i;
            count[i]--;
        }
    }
}
