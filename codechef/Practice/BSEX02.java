// Problem: BSEX02
// Platform: codechef
// Language: import java.util.*;
public class Main {
    public static int maxCompleteLayers(int N) {
        int left = 0, right = N, result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long totalBricks = (long) mid * (mid + 1) / 2;

            if (totalBricks <= N) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            System.out.println(maxCompleteLayers(N));
        }
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP06/problems/BSEX02?tab=solution
// Solved on: 2026-10-25T16:55:55.707Z

import java.util.*;
public class Main {
    public static int maxCompleteLayers(int N) {
        int left = 0, right = N, result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long totalBricks = (long) mid * (mid + 1) / 2;

            if (totalBricks <= N) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            System.out.println(maxCompleteLayers(N));
        }
    }
}
