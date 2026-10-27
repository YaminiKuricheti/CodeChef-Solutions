// Problem: INSERTPOS
// Platform: codechef
// Language: class Solution {
    public int searchInsertPosition(int[] arr, int target) {
        int left = 0, right = arr.length - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        // Target not found, return insertion position
        return left;
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP06/problems/INSERTPOS?tab=solution
// Solved on: 2026-10-27T16:40:09.987Z


class Solution {
    public int searchInsertPosition(int[] arr, int target) {
        int left = 0, right = arr.length - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        // Target not found, return insertion position
        return left;
    }
}
