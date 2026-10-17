// Problem: SESO12
// Platform: codechef
// Language: import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (a > c) {
            int temp = a;
            a = c;
            c = temp;
        }
        if (b > c) {
            int temp = b;
            b = c;
            c = temp;
        }
        
        System.out.println(a + " " + b + " " + c);
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH3/problems/SESO12?tab=solution
// Solved on: 2026-10-17T16:07:28.597Z

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (a > c) {
            int temp = a;
            a = c;
            c = temp;
        }
        if (b > c) {
            int temp = b;
            b = c;
            c = temp;
        }
        
        System.out.println(a + " " + b + " " + c);
    }
}
