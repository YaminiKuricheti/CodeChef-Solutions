// Problem: LEADERINARAY
// Platform: codechef
// Language: class Solution {
    public List<Integer> findLeaders(int[] nums) {
        int n = nums.length;
        List<Integer> leaders = new ArrayList<>();
        int maxFromRight = nums[n - 1];

        // Last element is always a leader
        leaders.add(nums[n - 1]);

        // Traverse from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] > maxFromRight) {
                leaders.add(nums[i]);
                maxFromRight = nums[i];
            }
        }

        // Reverse list to maintain original order
        Collections.reverse(leaders);
        return leaders;
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/LEADERINARAY?tab=solution
// Solved on: 2026-10-24T06:38:02.668Z

class Solution {
    public List<Integer> findLeaders(int[] nums) {
        int n = nums.length;
        List<Integer> leaders = new ArrayList<>();
        int maxFromRight = nums[n - 1];

        // Last element is always a leader
        leaders.add(nums[n - 1]);

        // Traverse from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] > maxFromRight) {
                leaders.add(nums[i]);
                maxFromRight = nums[i];
            }
        }

        // Reverse list to maintain original order
        Collections.reverse(leaders);
        return leaders;
    }
}

