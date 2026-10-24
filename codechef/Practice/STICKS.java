// Problem: STICKS
// Platform: codechef
// Language: Java​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sorting-new/SORTING02/problems/STICKS?tab=statement
// Solved on: 2026-10-24T07:35:38.554Z

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        while(T-->0){
            int n=sc.nextInt();
            int[] V=new int[n];
            for(int i=0;i<n;i++) 
            {
                V[i]=sc.nextInt();
            }
            Arrays.sort(V);
            int max1=0,max2=0;
            int i=n-1;
            while (i > 0) {
                if (V[i] == V[i - 1]) {
                    max1 = V[i];
                    i -= 2;
                    break;
                }
                i--;
            }
            while(i>0) 
            {
                if(V[i]==V[i-1]) 
                {
                    max2=V[i];
                    i-=2;
                    break;
                }
                i--;
            }
            if (max1>0&&max2>0) 
            {
                System.out.println(max1*max2);
            } else 
            {
                System.out.println(-1);
            }
        }
	}
}
