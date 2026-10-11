// Problem: GROUPANAGRAM
// Platform: codechef
// Language: class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> groups = new HashMap<>();
        for (String s : strs) {
            char[] chars = s.toCharArray();
            Arrays.sort(chars);
            String sortedS = new String(chars);
            if (!groups.containsKey(sortedS)) {
                groups.put(sortedS, new ArrayList<>());
            }
            groups.get(sortedS).add(s);
        }
        return new ArrayList<>(groups.values());
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/hashing/HASH04/problems/GROUPANAGRAM?tab=solution
// Solved on: 2026-10-11T16:29:39.011Z

class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> groups = new HashMap<>();
        for (String s : strs) {
            char[] chars = s.toCharArray();
            Arrays.sort(chars);
            String sortedS = new String(chars);
            if (!groups.containsKey(sortedS)) {
                groups.put(sortedS, new ArrayList<>());
            }
            groups.get(sortedS).add(s);
        }
        return new ArrayList<>(groups.values());
    }
}