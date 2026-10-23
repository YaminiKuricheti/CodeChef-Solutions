// Problem: MAXCOUNT
// Platform: codechef
// Language: class Solution {
    public int[] mostFrequent(int N, int[] A) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        int maxFreq = 0;
        int bestElem = Integer.MAX_VALUE;
        
        for (int i = 0; i < N; i++) {
            int num = A[i];
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }
        
        for (Map.Entry<Integer, Integer> entry : freq.entrySet()) {
            int count = entry.getValue();
            int num = entry.getKey();
            
            if (count > maxFreq) {
                maxFreq = count;
                bestElem = num;
            } else if (count == maxFreq && num < bestElem) {
                bestElem = num;
            }
        }
        
        return new int[]{bestElem, maxFreq};
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/MAXCOUNT?tab=solution
// Solved on: 2026-10-23T16:03:38.558Z

class Solution {
    public int[] mostFrequent(int N, int[] A) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        int maxFreq = 0;
        int bestElem = Integer.MAX_VALUE;
        
        for (int i = 0; i < N; i++) {
            int num = A[i];
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }
        
        for (Map.Entry<Integer, Integer> entry : freq.entrySet()) {
            int count = entry.getValue();
            int num = entry.getKey();
            
            if (count > maxFreq) {
                maxFreq = count;
                bestElem = num;
            } else if (count == maxFreq && num < bestElem) {
                bestElem = num;
            }
        }
        
        return new int[]{bestElem, maxFreq};
    }
}