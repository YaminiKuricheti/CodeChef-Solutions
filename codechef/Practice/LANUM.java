// Problem: LANUM
// Platform: codechef
// Language: import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        if (line == null) return;
        int N = Integer.parseInt(line.trim());
        
        line = br.readLine();
        if (line == null) return;
        StringTokenizer st = new StringTokenizer(line);
        
        String[] strs = new String[N];
        for (int i = 0; i < N; i++) {
            strs[i] = st.nextToken();
        }
        
        Arrays.sort(strs, new Comparator<String>() {
            @Override
            public int compare(String x, String y) {
                String xy = x + y;
                String yx = y + x;
                return yx.compareTo(xy); // descending order
            }
        });
        
        if (strs[0].equals("0")) {
            System.out.println(0);
            return;
        }
        
        StringBuilder sb = new StringBuilder();
        for (String s : strs) {
            sb.append(s);
        }
        
        System.out.println(sb.toString());
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sorting-new/SORTING02/problems/LANUM?tab=solution
// Solved on: 2026-10-24T07:52:34.342Z

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        if (line == null) return;
        int N = Integer.parseInt(line.trim());
        
        line = br.readLine();
        if (line == null) return;
        StringTokenizer st = new StringTokenizer(line);
        
        String[] strs = new String[N];
        for (int i = 0; i < N; i++) {
            strs[i] = st.nextToken();
        }
        
        Arrays.sort(strs, new Comparator<String>() {
            @Override
            public int compare(String x, String y) {
                String xy = x + y;
                String yx = y + x;
                return yx.compareTo(xy); // descending order
            }
        });
        
        if (strs[0].equals("0")) {
            System.out.println(0);
            return;
        }
        
        StringBuilder sb = new StringBuilder();
        for (String s : strs) {
            sb.append(s);
        }
        
        System.out.println(sb.toString());
    }
}