// Problem: SESO09
// Platform: codechef
// Language: import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        
        int[][] pairs = new int[n][2];
        
        for (int i = 0; i < n; i++) {
            pairs[i][0] = scanner.nextInt();
            pairs[i][1] = scanner.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            if ((pairs[i][0] + pairs[i][1]) % k == 0) {
                System.out.println("(" + pairs[i][0] + ", " + pairs[i][1] + ")");
            }
        }
        
        scanner.close();
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH2/problems/SESO09?tab=solution
// Solved on: 2026-10-24T06:56:48.741Z

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        
        int[][] pairs = new int[n][2];
        
        for (int i = 0; i < n; i++) {
            pairs[i][0] = scanner.nextInt();
            pairs[i][1] = scanner.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            if ((pairs[i][0] + pairs[i][1]) % k == 0) {
                System.out.println("(" + pairs[i][0] + ", " + pairs[i][1] + ")");
            }
        }
        
        scanner.close();
    }
}
