// Problem: SESO03
// Platform: codechef
// Language: import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the length of the array
        int n = scanner.nextInt();

        // Read the element to search for
        int k = scanner.nextInt();

        // Read the array elements
        int[] array = new int[n];
        for (int i = 0; i < n; ++i) {
            array[i] = scanner.nextInt();
        }

        // Initialize a flag to indicate if the element is found
        boolean found = false;

        // Use a for loop to search for the element in the array
        for (int i = 0; i < n; ++i) {
            if (array[i] == k) {
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
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH1/problems/SESO03?tab=solution
// Solved on: 2026-10-24T06:46:46.771Z

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the length of the array
        int n = scanner.nextInt();

        // Read the element to search for
        int k = scanner.nextInt();

        // Read the array elements
        int[] array = new int[n];
        for (int i = 0; i < n; ++i) {
            array[i] = scanner.nextInt();
        }

        // Initialize a flag to indicate if the element is found
        boolean found = false;

        // Use a for loop to search for the element in the array
        for (int i = 0; i < n; ++i) {
            if (array[i] == k) {
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
