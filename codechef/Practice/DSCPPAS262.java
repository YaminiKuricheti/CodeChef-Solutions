// Problem: DSCPPAS262
// Platform: codechef
// Language: import java.util.Scanner;

public class Main {

    public static int totalSubarrays(int[] arr, int N, int K) {
        int ans = 0, i = 0;

        while (i < N) {
            // If arr[i] > K, it cannot be part of any subarray
            if (arr[i] > K) {
                i++;
                continue;
            }

            int count = 0;
            // Count elements where arr[i] is not greater than K
            while (i < N && arr[i] <= K) {
                i++;
                count++;
            }

            // Summation of all possible subarrays
            ans += (count * (count + 1)) / 2;
        }

        return ans;
    }

    public static int countSubarrays(int[] arr, int N, int K) {
        // Count subarrays with max <= K - 1
        int count1 = totalSubarrays(arr, N, K - 1);

        // Count subarrays with max >= K + 1
        int count2 = totalSubarrays(arr, N, K);

        // Count subarrays with max = K
        int ans = count2 - count1;

        return ans;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();

        int K = scanner.nextInt();

        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = scanner.nextInt();
        }

        // Calculate and store the count
        int count = countSubarrays(arr, N, K);
        System.out.println(count);

        // Close scanner (optional)
        scanner.close();
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/DSCPPAS262?tab=solution
// Solved on: 2026-10-24T06:34:08.614Z

import java.util.Scanner;

public class Main {

    public static int totalSubarrays(int[] arr, int N, int K) {
        int ans = 0, i = 0;

        while (i < N) {
            // If arr[i] > K, it cannot be part of any subarray
            if (arr[i] > K) {
                i++;
                continue;
            }

            int count = 0;
            // Count elements where arr[i] is not greater than K
            while (i < N && arr[i] <= K) {
                i++;
                count++;
            }

            // Summation of all possible subarrays
            ans += (count * (count + 1)) / 2;
        }

        return ans;
    }

    public static int countSubarrays(int[] arr, int N, int K) {
        // Count subarrays with max <= K - 1
        int count1 = totalSubarrays(arr, N, K - 1);

        // Count subarrays with max >= K + 1
        int count2 = totalSubarrays(arr, N, K);

        // Count subarrays with max = K
        int ans = count2 - count1;

        return ans;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();

        int K = scanner.nextInt();

        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = scanner.nextInt();
        }

        // Calculate and store the count
        int count = countSubarrays(arr, N, K);
        System.out.println(count);

        // Close scanner (optional)
        scanner.close();
    }
}