// Problem: SESO02
// Platform: codechef
// Language: Java​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH1/problems/SESO02?tab=statement
// Solved on: 2026-10-24T06:45:19.167Z

import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Define the array
        int[] array = {3, 5, 2, 9, 7, 1};
        boolean found = false;

        // Check if 7 is present in the array
        for (int i = 0; i < array.length; ++i) {
            if (array[i] == 7) {
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