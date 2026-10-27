// Problem: AVGFLEXP
// Platform: codechef
// Language: import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] v = new int[n];
            for (int i = 0; i < n; i++) {
                v[i] = scanner.nextInt();
            }
            Arrays.sort(v);
            int ans = 0;
            for (int i = 0; i < n; i++) {
                int d = upperBound(v, v[i]);
                if (d > (n - d)) {
                    ans++;
                }
            }
            System.out.println(ans);
        }
    }

    // Custom implementation of upper_bound
    public static int upperBound(int[] array, int key) {
        int low = 0;
        int high = array.length;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (array[mid] <= key) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP04/problems/AVGFLEXP?tab=solution
// Solved on: 2026-10-27T16:36:25.151Z

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] v = new int[n];
            for (int i = 0; i < n; i++) {
                v[i] = scanner.nextInt();
            }
            Arrays.sort(v);
            int ans = 0;
            for (int i = 0; i < n; i++) {
                int d = upperBound(v, v[i]);
                if (d > (n - d)) {
                    ans++;
                }
            }
            System.out.println(ans);
        }
    }

    // Custom implementation of upper_bound
    public static int upperBound(int[] array, int key) {
        int low = 0;
        int high = array.length;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (array[mid] <= key) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
}
