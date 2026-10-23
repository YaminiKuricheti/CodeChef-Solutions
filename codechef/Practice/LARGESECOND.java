// Problem: PROBLEM LINK:
// Platform: codechef
// Language: for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    m1, m2 = max(a), 0
    for x in a:
        if x != m1: m2 = max(m2, x)
    print(m1 + m2)
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND?tab=solution
// Solved on: 2026-10-23T15:37:10.929Z

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] a = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }
            int firstMax = Integer.MIN_VALUE;
            int secondMax = Integer.MIN_VALUE;

            for (int i = 0; i < n; i++) {
                if (a[i] > firstMax) {
                    secondMax = firstMax;
                    firstMax = a[i];
                } else if (a[i] > secondMax && a[i] != firstMax) {
                    secondMax = a[i];
                }
            }

            int maxSum = firstMax + secondMax;
            System.out.println(maxSum);
        }

        scanner.close();
    }
}
