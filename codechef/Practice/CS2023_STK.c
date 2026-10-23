// Problem: PROBLEM LINK:
// Platform: codechef
// Language: for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    amx, bmx = 0, 0
    cura, curb = 0, 0
    for i in range(n):
        if a[i] == 0: cura = 0
        else: cura += 1
        
        if b[i] == 0: curb = 0
        else: curb += 1
        
        amx = max(amx, cura)
        bmx = max(bmx, curb)
    print('Om' if amx > bmx else ('Addy' if amx < bmx else 'Draw'))
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYS/problems/CS2023_STK?tab=solution
// Solved on: 2026-10-23T15:50:27.719Z

import java.util.Scanner;

public class Main {
    public static int calculateStreak(int[] arr, int n) {
        int streak = 0, maxStreak = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                streak++;
                maxStreak = Math.max(maxStreak, streak);
            } else {
                streak = 0;
            }
        }
        return maxStreak;
    }

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
            int omStreak = calculateStreak(a, n);
            int addyStreak = calculateStreak(b, n);

            if (omStreak > addyStreak) {
                System.out.println("OM");
            } else if (omStreak < addyStreak) {
                System.out.println("ADDY");
            } else {
                System.out.println("DRAW");
            }
        }

        scanner.close();
    }
}
