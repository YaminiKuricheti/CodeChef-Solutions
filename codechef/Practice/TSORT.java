// Problem: TSORT
// Platform: codechef
// Language: Java​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sorting-new/SORTING01/problems/TSORT?tab=statement
// Solved on: 2026-10-24T07:46:18.220Z

import java.util.*;

public class Main {
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++) {
           arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        for(int x:arr) 
        {
            System.out.println(x);
        }
    }
}
