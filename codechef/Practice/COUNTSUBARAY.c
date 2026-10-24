// Problem: COUNTSUBARAY
// Platform: codechef
// Language: class Solution {
    public int subarraySum(int[] arr, int k) {
        Map<Integer, Integer> prefixCount = new HashMap<>();
        prefixCount.put(0, 1); // base case: empty prefix sum

        int sum = 0, count = 0;
        for (int num : arr) {
            sum += num;
            int rem = sum - k;
            if (prefixCount.containsKey(rem)) {
                count += prefixCount.get(rem);
            }
            prefixCount.put(sum, prefixCount.getOrDefault(sum, 0) + 1);
        }
        return count;
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/COUNTSUBARAY?tab=solution
// Solved on: 2026-10-24T06:30:42.264Z

class Solution {
    public int subarraySum(int[] arr, int k) {
        Map<Integer, Integer> prefixCount = new HashMap<>();
        prefixCount.put(0, 1); // base case: empty prefix sum

        int sum = 0, count = 0;
        for (int num : arr) {
            sum += num;
            int rem = sum - k;
            if (prefixCount.containsKey(rem)) {
                count += prefixCount.get(rem);
            }
            prefixCount.put(sum, prefixCount.getOrDefault(sum, 0) + 1);
        }
        return count;
    }
}

