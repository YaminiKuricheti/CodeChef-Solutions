// Problem: TRICOINP
// Platform: codechef
// Language: import java.util.Scanner;

public class Main {
    public static long isTotalCoins(long h) {
        return (h * (h + 1)) / 2;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            long n = scanner.nextLong();
            long ans = 0;
            long lo = 1, hi = n, mid;
            while (lo <= hi) {
                mid = (hi + lo) / 2;
                if (isTotalCoins(mid) <= n) {
                    ans = mid;
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
            System.out.println(ans);
        }
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP05/problems/TRICOINP?tab=solution
// Solved on: 2026-10-27T16:37:34.192Z

import java.util.Scanner;

public class Main {
    public static long isTotalCoins(long h) {
        return (h * (h + 1)) / 2;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            long n = scanner.nextLong();
            long ans = 0;
            long lo = 1, hi = n, mid;
            while (lo <= hi) {
                mid = (hi + lo) / 2;
                if (isTotalCoins(mid) <= n) {
                    ans = mid;
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
            System.out.println(ans);
        }
    }
}
