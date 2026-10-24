// Problem: SESO44
// Platform: codechef
// Language: // Function to swap elements
void swap(vector<int>& arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Partition function
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // Pivot is the last element
    int i = low - 1;  // Index of the smaller element
    
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {  // If current element is smaller than the pivot
            i++;
            swap(arr, i, j);  // Swap it with the element at i
        }
    }
    swap(arr, i + 1, high);  // Place the pivot in the correct position
    return i + 1;  // Return the partition index
}

// Quick sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Partition the array
        quickSort(arr, low, pi - 1);  // Recursively sort the left sub-array
        quickSort(arr, pi + 1, high);  // Recursively sort the right sub-array
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH8/problems/SESO44?tab=solution
// Solved on: 2026-10-24T07:04:54.566Z

public static void swap(int[] arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

public static int partition(int[] arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return i + 1;
}

public static void quickSort(int[] arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}