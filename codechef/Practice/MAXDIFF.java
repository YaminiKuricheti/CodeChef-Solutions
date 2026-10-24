// Problem: MAXDIFF
// Platform: codechef
// Language: Java​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sorting-new/SORTING02/problems/MAXDIFF?tab=statement
// Solved on: 2026-10-24T07:21:02.722Z

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt(); 
        while(t-- >0) {
            int n=sc.nextInt();
            int k=sc.nextInt();
            int[] arr=new int[n];
            long totalSum=0; 
            for (int i=0;i<n;i++) 
            {
                arr[i]=sc.nextInt();
                totalSum+=arr[i];
            }
            Arrays.sort(arr);
            long sumOfKSmallest=0,sumOfKLargest=0;
            for (int i=0;i<k;i++) 
            {
                sumOfKSmallest+=arr[i];
                sumOfKLargest+=arr[n-1-i]; 
            }
            long diff1=Math.abs(sumOfKSmallest-(totalSum-sumOfKSmallest));
            long diff2=Math.abs(sumOfKLargest-(totalSum-sumOfKLargest));
            System.out.println(Math.max(diff1,diff2));
        }
    }
}
