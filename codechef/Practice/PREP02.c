// Problem: Rotating a Matrix by 180 Degrees
// Platform: codechef
// Language: #include <iostream>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Swap elements in the top half with their corresponding bottom half elements
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            swap(matrix[i][j], matrix[n - 1 - i][n - 1 - j]);
        }
    }
    // If the matrix has an odd size, swap the elements in the middle row
    if (n % 2 == 1) {
        int mid = n / 2;
        for (int j = 0; j < n / 2; j++) {
            swap(matrix[mid][j], matrix[mid][n - 1 - j]);
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        
        rotateMatrix(matrix);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/PREP02?tab=solution
// Solved on: 2026-10-24T06:34:25.417Z

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BufferedReader br=new BufferedReader( new InputStreamReader(System.in)  ); 
		
		PrintWriter out = new PrintWriter(System.out);
		
		int t = Integer.valueOf(br.readLine());
		
		while (t-- > 0) {
		    int n = Integer.valueOf(br.readLine());;
		    
		    String a[][] = new String[n][n];
		    
		    for (int i = 0 ; i < n ; i++ ) {
		        
		        String temp = br.readLine();
		        
		        String sArr [] = temp.split( " " );
		        
		        for (int j = 0 ; j < n ; j++ ) {
		            a[n - i - 1][n - j - 1] = sArr[j];
		        }
		    }
		    
		    for( String[] r : a ){
		        out.println(Arrays.toString(r).replace(",", "").replace("[", "").replace("]", "").trim());
		    }
		}
		out.close();
	}
}
