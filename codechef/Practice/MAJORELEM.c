// Problem: MAJORELEM
// Platform: codechef
// Language: class Solution {
    public int majorityElement(int[] arr) {
        int candidate = arr[0];
        int count = 1;

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] == candidate) {
                count++;
            } else {
                count--;
                if (count == 0) {
                    candidate = arr[i];
                    count = 1;
                }
            }
        }
        return candidate; // Guaranteed to exist
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/MAJORELEM?tab=solution
// Solved on: 2026-10-23T16:27:34.999Z

class Solution {
    public int majorityElement(int[] arr) {
        int candidate = arr[0];
        int count = 1;

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] == candidate) {
                count++;
            } else {
                count--;
                if (count == 0) {
                    candidate = arr[i];
                    count = 1;
                }
            }
        }
        return candidate; // Guaranteed to exist
    }
}