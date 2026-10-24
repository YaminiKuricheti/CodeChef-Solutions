// Problem: CHEFA
// Platform: codechef
// Language: import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextLong();
            }
            // your code goes here
            long ans=0;
            Arrays.sort(a);
            for(int i=n-1;i>=0;i-=2) 
            {
                ans+=a[i];
            }
            System.out.println(ans);
        
        }
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sorting-new/SORTING02/problems/CHEFA?tab=Help
// Solved on: 2026-10-24T07:30:54.162Z

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextLong();
            }
            long ans = 0;
            Arrays.sort(a);
            for (int i = n - 1; i >= 0; i -= 2) {
                ans += a[i];
            }
            System.out.println(ans);
        }
        scanner.close();
    }
}