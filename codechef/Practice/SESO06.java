// Problem: SESO06
// Platform: codechef
// Language: import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s1 = scanner.next();
        char c1 = scanner.next().charAt(0);
        int k = scanner.nextInt();
        scanner.close();
        
        int count = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) == c1) {
                count++;
                if (count == k) {
                    System.out.println(i);
                    return;
                }
            }
        }
        
        System.out.println(-1);
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH2/problems/SESO06?tab=solution
// Solved on: 2026-10-24T06:53:42.794Z

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s1 = scanner.next();
        char c1 = scanner.next().charAt(0);
        int k = scanner.nextInt();
        scanner.close();
        
        int count = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) == c1) {
                count++;
                if (count == k) {
                    System.out.println(i);
                    return;
                }
            }
        }
        
        System.out.println(-1);
    }
}
