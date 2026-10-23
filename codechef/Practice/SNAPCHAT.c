// Problem: PROBLEM LINK:
// Platform: codechef
// Language: for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ans, cur = 0, 0
    for i in range(n):
        if a[i] > 0 and b[i] > 0: cur += 1
        else: cur = 0
        ans = max(ans, cur)
    print(ans)
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/SNAPCHAT?tab=solution
// Solved on: 2026-10-23T15:51:43.355Z

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }

            for (int i = 0; i < n; i++) {
                b[i] = scanner.nextInt();
            }
       int ans = 0, cur = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] > 0 && b[i] > 0) cur++;
                else cur = 0;
                ans = Math.max(ans, cur);
            }
            System.out.println(ans);
        }
    }
}