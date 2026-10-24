// Problem: DSCPPAS266
// Platform: codechef
// Language: Java​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sorting-new/SORTING01/problems/DSCPPAS266?tab=statement
// Solved on: 2026-10-24T07:16:45.964Z

public static boolean canReduce(int N, int[] arr) {
    //write your code here
    Arrays.sort(arr);
    for(int i=1;i<N;i++)
    {
        if(arr[i]-arr[i-1]>1)
        {
            return false;
        }
    }
    return true;
}