// Problem: SESO08
// Platform: codechef
// Language: import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        scanner.close();
        
        int min_diff = Integer.MAX_VALUE;
        int result = Integer.MAX_VALUE;
        
        for (int i = 0; i < n; i++) {
            int diff = Math.abs(arr[i] - k);
            if (diff < min_diff || (diff == min_diff && arr[i] < result)) {
                min_diff = diff;
                result = arr[i];
            }
        }
        
        System.out.println(result);
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH2/problems/SESO08?tab=solution
// Solved on: 2026-10-24T06:56:21.198Z

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        scanner.close();
        
        int min_diff = Integer.MAX_VALUE;
        int result = Integer.MAX_VALUE;
        
        for (int i = 0; i < n; i++) {
            int diff = Math.abs(arr[i] - k);
            if (diff < min_diff || (diff == min_diff && arr[i] < result)) {
                min_diff = diff;
                result = arr[i];
            }
        }
        
        System.out.println(result);
    }
}
