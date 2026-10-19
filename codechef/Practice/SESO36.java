// Problem: SESO36
// Platform: codechef
// Language: import java.util.Scanner;

class Codechef {

    public static void nextGreaterElements(int[] arr) {
        int n = arr.length;
        int[] nge = new int[n];

        for (int i = 0; i < n; i++) {
            nge[i] = -1;  // Initialize the next greater element to -1
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[i]) {
                    nge[i] = arr[j];
                    break;  // Found the next greater element, no need to check further
                }
            }
        }

        for (int i = 0; i < n; i++) {
            System.out.print(nge[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        nextGreaterElements(arr);

        scanner.close();
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH5/problems/SESO36?tab=solution
// Solved on: 2026-10-19T17:07:39.374Z

import java.util.Scanner;

class Codechef {

    public static void nextGreaterElements(int[] arr) {
        int n = arr.length;
        int[] nge = new int[n];

        for (int i = 0; i < n; i++) {
            nge[i] = -1;  // Initialize the next greater element to -1
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[i]) {
                    nge[i] = arr[j];
                    break;  // Found the next greater element, no need to check further
                }
            }
        }

        for (int i = 0; i < n; i++) {
            System.out.print(nge[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        nextGreaterElements(arr);

        scanner.close();
    }
}
