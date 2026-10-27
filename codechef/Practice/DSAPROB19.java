// Problem: DSAPROB19
// Platform: codechef
// Language: import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] positions = new int[n];
        for (int i = 0; i < n; i++) {
            positions[i] = sc.nextInt();
        }

        Arrays.sort(positions);

        long left = 0, right = 2000000000, result = 0;
        while (left <= right) {
            long  mid = left + (right - left) / 2;
            if (canPlaceBalls(positions, k, mid)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        System.out.println(result);
        sc.close();
    }

    private static boolean canPlaceBalls(int[] positions, int k, long minDist) {
        int count = 1;
        int lastPos = positions[0];

        for (int i = 1; i < positions.length; i++) {
            if (positions[i] - lastPos >= minDist) {
                count++;
                lastPos = positions[i];
                if (count == k) return true;
            }
        }
        return false;
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP03/problems/DSAPROB19?tab=solution
// Solved on: 2026-10-27T16:34:49.757Z

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] positions = new int[n];
        for (int i = 0; i < n; i++) {
            positions[i] = sc.nextInt();
        }

        Arrays.sort(positions);

        long left = 0, right = 2000000000, result = 0;
        while (left <= right) {
            long  mid = left + (right - left) / 2;
            if (canPlaceBalls(positions, k, mid)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        System.out.println(result);
        sc.close();
    }

    private static boolean canPlaceBalls(int[] positions, int k, long minDist) {
        int count = 1;
        int lastPos = positions[0];

        for (int i = 1; i < positions.length; i++) {
            if (positions[i] - lastPos >= minDist) {
                count++;
                lastPos = positions[i];
                if (count == k) return true;
            }
        }
        return false;
    }
}
