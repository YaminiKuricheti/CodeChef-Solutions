// Problem: SESO27
// Platform: codechef
// Language: import java.util.*;

public class Main {
    public static List<Integer> mergeSortedArrays(List<Integer> first, List<Integer> second) {
        int n = first.size();
        int m = second.size();
        List<Integer> mergedArray = new ArrayList<>(n + m);

        int i = 0, j = 0;

        // Merge the arrays while both have elements remaining
        while (i < n && j < m) {
            if (first.get(i) <= second.get(j)) {
                mergedArray.add(first.get(i));
                i++;
            } else {
                mergedArray.add(second.get(j));
                j++;
            }
        }

        // If any elements are left in first, add them to mergedArray
        while (i < n) {
            mergedArray.add(first.get(i));
            i++;
        }

        // If any elements are left in second, add them to mergedArray
        while (j < m) {
            mergedArray.add(second.get(j));
            j++;
        }

        return mergedArray;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        List<Integer> first = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            first.add(scanner.nextInt());
        }

        int m = scanner.nextInt();
        List<Integer> second = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            second.add(scanner.nextInt());
        }

        List<Integer> mergedArray = mergeSortedArrays(first, second);
        for (int num : mergedArray) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH7/problems/SESO27?tab=solution
// Solved on: 2026-10-21T15:57:05.635Z

import java.util.*;

public class Main {
    public static List<Integer> mergeSortedArrays(List<Integer> first, List<Integer> second) {
        int n = first.size();
        int m = second.size();
        List<Integer> mergedArray = new ArrayList<>(n + m);

        int i = 0, j = 0;

        // Merge the arrays while both have elements remaining
        while (i < n && j < m) {
            if (first.get(i) <= second.get(j)) {
                mergedArray.add(first.get(i));
                i++;
            } else {
                mergedArray.add(second.get(j));
                j++;
            }
        }

        // If any elements are left in first, add them to mergedArray
        while (i < n) {
            mergedArray.add(first.get(i));
            i++;
        }

        // If any elements are left in second, add them to mergedArray
        while (j < m) {
            mergedArray.add(second.get(j));
            j++;
        }

        return mergedArray;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        List<Integer> first = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            first.add(scanner.nextInt());
        }

        int m = scanner.nextInt();
        List<Integer> second = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            second.add(scanner.nextInt());
        }

        List<Integer> mergedArray = mergeSortedArrays(first, second);
        for (int num : mergedArray) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
