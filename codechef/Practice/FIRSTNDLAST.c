// Problem: FIRSTNDLAST
// Platform: codechef
// Language: class Solution {
    
    // Find first occurrence of key
    public int findFirst(int[] arr, int key) {
        int left = 0, right = arr.length - 1;
        int first = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] < key) {
                left = mid + 1;
            } else if (arr[mid] > key) {
                right = mid - 1;
            } else {
                first = mid;
                right = mid - 1;  // Continue searching to the left
            }
        }
        
        return first;
    }
    
    // Find last occurrence of key
    public int findLast(int[] arr, int key) {
        int left = 0, right = arr.length - 1;
        int last = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] < key) {
                left = mid + 1;
            } else if (arr[mid] > key) {
                right = mid - 1;
            } else {
                last = mid;
                left = mid + 1;  // Continue searching to the right
            }
        }
        
        return last;
    }
    
    // Public method to get the result range
    public int[] searchRange(int[] arr, int key) {
        int first = findFirst(arr, key);
        int last = findLast(arr, key);
        return new int[] {first, last};
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP06/problems/FIRSTNDLAST?tab=solution
// Solved on: 2026-10-25T16:54:02.893Z

class Solution {
    
    // Find first occurrence of key
    public int findFirst(int[] arr, int key) {
        int left = 0, right = arr.length - 1;
        int first = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] < key) {
                left = mid + 1;
            } else if (arr[mid] > key) {
                right = mid - 1;
            } else {
                first = mid;
                right = mid - 1;  // Continue searching to the left
            }
        }
        
        return first;
    }
    
    // Find last occurrence of key
    public int findLast(int[] arr, int key) {
        int left = 0, right = arr.length - 1;
        int last = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] < key) {
                left = mid + 1;
            } else if (arr[mid] > key) {
                right = mid - 1;
            } else {
                last = mid;
                left = mid + 1;  // Continue searching to the right
            }
        }
        
        return last;
    }
    
    // Public method to get the result range
    public int[] searchRange(int[] arr, int key) {
        int first = findFirst(arr, key);
        int last = findLast(arr, key);
        return new int[] {first, last};
    }
}
