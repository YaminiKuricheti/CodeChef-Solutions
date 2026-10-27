// Problem: DSAAGP1099
// Platform: codechef
// Language: import java.util.Arrays;
import java.util.Scanner;

class CowsAndStalls {
    
    public static boolean check(int[] arr, int d, int n, int c) {
        int cows = c - 1;
        int prev = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] - prev >= d) {
                cows--;
                prev = arr[i];
            }
            if (cows == 0) break;
        }
        return cows <= 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);

        // Binary search for the maximum minimum distance
        int first = 0, last = (int) 1e9 + 1;
        while (last - first > 1) {
            int mid = (first + last) / 2;
            boolean canPlace = check(arr, mid, n, c);
            if (canPlace) {
                first = mid;  // We can place cows with at least 'mid' distance
            } else {
                last = mid;   // Cannot place, reduce the distance
            }
        }

        System.out.println(first);
        sc.close();
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP03/problems/DSAAGP1099?tab=solution
// Solved on: 2026-10-27T16:34:23.406Z

import java.util.Arrays;
import java.util.Scanner;

class CowsAndStalls {
    
    public static boolean check(int[] arr, int d, int n, int c) {
        int cows = c - 1;
        int prev = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] - prev >= d) {
                cows--;
                prev = arr[i];
            }
            if (cows == 0) break;
        }
        return cows <= 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);

        // Binary search for the maximum minimum distance
        int first = 0, last = (int) 1e9 + 1;
        while (last - first > 1) {
            int mid = (first + last) / 2;
            boolean canPlace = check(arr, mid, n, c);
            if (canPlace) {
                first = mid;  // We can place cows with at least 'mid' distance
            } else {
                last = mid;   // Cannot place, reduce the distance
            }
        }

        System.out.println(first);
        sc.close();
    }
}
