// Problem: SESO10
// Platform: codechef
// Language: Java​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH2/problems/SESO10
// Solved on: 2026-10-24T06:57:12.744Z

import java.util.Scanner;
public class Main 
{
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        int[][] pairs = new int[n][2];
        for (int i=0;i<n;i++) 
        {
            pairs[i][0]=sc.nextInt();
            pairs[i][1]=sc.nextInt();
        }
        int left=sc.nextInt();
        int right=sc.nextInt();
        for (int i=0;i<n;i++) 
        {
            int sum=pairs[i][0]+pairs[i][1];
            int product=pairs[i][0]*pairs[i][1];
            if (sum>=left&&sum<=right&&product>=left&&product<= right) 
            {
                System.out.println(pairs[i][0] + " " + pairs[i][1]);
            }
        }
        
        sc.close();
    }
}
