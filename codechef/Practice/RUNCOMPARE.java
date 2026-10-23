// Problem: PROBLEM LINK:
// Platform: codechef
// Language: for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	b = list(map(int, input().split()))
	ans = 0
	for i in range(n):
	    if a[i] <= 2*b[i] and b[i] <= 2*a[i]: ans += 1
	print(ans)
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/RUNCOMPARE?tab=solution
// Solved on: 2026-10-23T15:56:30.158Z

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
            int happyDays = 0;
            
            for (int i = 0; i < n; i++) {
                if (a[i] <= 2 * b[i] && b[i] <= 2 * a[i]) {
                    happyDays++;
                }
            }
            
            System.out.println(happyDays);
        }
        
        scanner.close();
    }
}
