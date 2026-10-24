// Problem: SESO05
// Platform: codechef
// Language: import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the number of pairs
        int n = scanner.nextInt();

        // Read the pairs
        int[][] pairs = new int[n][2];
        for (int i = 0; i < n; ++i) {
            pairs[i][0] = scanner.nextInt();
            pairs[i][1] = scanner.nextInt();
        }

        // Read the integers a and b
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        // Initialize a flag to indicate if the pair is found
        boolean found = false;

        // Check each pair
        for (int i = 0; i < n; ++i) {
            if ((pairs[i][0] == a && pairs[i][1] == b) || (pairs[i][0] == b && pairs[i][1] == a)) {
                found = true;
                break;
            }
        }

        // Print the result
        if (found) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH1/problems/SESO05?tab=solution
// Solved on: 2026-10-24T06:47:43.114Z

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the number of pairs
        int n = scanner.nextInt();

        // Read the pairs
        int[][] pairs = new int[n][2];
        for (int i = 0; i < n; ++i) {
            pairs[i][0] = scanner.nextInt();
            pairs[i][1] = scanner.nextInt();
        }

        // Read the integers a and b
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        // Initialize a flag to indicate if the pair is found
        boolean found = false;

        // Check each pair
        for (int i = 0; i < n; ++i) {
            if ((pairs[i][0] == a && pairs[i][1] == b) || (pairs[i][0] == b && pairs[i][1] == a)) {
                found = true;
                break;
            }
        }

        // Print the result
        if (found) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
