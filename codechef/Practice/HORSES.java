// Problem: PROBLEM LINK:
// Platform: codechef
// Language: import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] s = new long[n];
            for (int i = 0; i < n; i++) {
                s[i] = scanner.nextLong();
            }
            Arrays.sort(s);
            long minval = Long.MAX_VALUE;
            for (int i = 1; i < n; i++) {
                minval = Math.min(minval, s[i] - s[i - 1]);
            }
            System.out.println(minval);
        }
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sorting-new/SORTING01/problems/HORSES?tab=solution
// Solved on: 2026-10-24T07:47:44.621Z

import java.util.*;

public class Main {
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) 
        {
            int n=sc.nextInt();
            long[] s=new long[n];
            for(int i=0;i<n;i++) 
            {
                s[i]=sc.nextLong();
            }
            Arrays.sort(s);
            long minval=Long.MAX_VALUE;
            for(int i=1;i<n;i++) 
            {
                minval=Math.min(minval,s[i]-s[i-1]);
            }
            System.out.println(minval);
        }
    }
}
