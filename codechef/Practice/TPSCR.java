// Problem: TPSCR
// Platform: codechef
// Language: import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    static class Student implements Comparable<Student> {
        int idx;
        int mark;
        
        Student(int idx, int mark) {
            this.idx = idx;
            this.mark = mark;
        }
        
        @Override
        public int compareTo(Student other) {
            if (this.mark != other.mark) {
                return Integer.compare(other.mark, this.mark); // descending
            }
            return Integer.compare(this.idx, other.idx); // ascending
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        if (line == null) return;
        int N = Integer.parseInt(line.trim());
        
        line = br.readLine();
        if (line == null) return;
        StringTokenizer st = new StringTokenizer(line);
        
        ArrayList<Student> students = new ArrayList<>(N);
        for (int i = 0; i < N; i++) {
            students.add(new Student(i, Integer.parseInt(st.nextToken())));
        }
        
        line = br.readLine();
        if (line == null) return;
        int K = Integer.parseInt(line.trim());
        
        Collections.sort(students);
        
        StringBuilder sb = new StringBuilder();
        int distinctCount = 0;
        int prevMark = -1;
        boolean first = true;
        
        for (int i = 0; i < N; i++) {
            Student s = students.get(i);
            if (s.mark != prevMark) {
                distinctCount++;
                prevMark = s.mark;
            }
            if (distinctCount > K) {
                break;
            }
            if (!first) {
                sb.append(" ");
            }
            sb.append(s.idx);
            first = false;
        }
        
        System.out.println(sb.toString());
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sorting-new/SORTING02/problems/TPSCR?tab=solution
// Solved on: 2026-10-24T07:51:11.091Z

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    static class Student implements Comparable<Student> {
        int idx;
        int mark;
        
        Student(int idx, int mark) {
            this.idx = idx;
            this.mark = mark;
        }
        
        @Override
        public int compareTo(Student other) {
            if (this.mark != other.mark) {
                return Integer.compare(other.mark, this.mark); // descending
            }
            return Integer.compare(this.idx, other.idx); // ascending
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        if (line == null) return;
        int N = Integer.parseInt(line.trim());
        
        line = br.readLine();
        if (line == null) return;
        StringTokenizer st = new StringTokenizer(line);
        
        ArrayList<Student> students = new ArrayList<>(N);
        for (int i = 0; i < N; i++) {
            students.add(new Student(i, Integer.parseInt(st.nextToken())));
        }
        
        line = br.readLine();
        if (line == null) return;
        int K = Integer.parseInt(line.trim());
        
        Collections.sort(students);
        
        StringBuilder sb = new StringBuilder();
        int distinctCount = 0;
        int prevMark = -1;
        boolean first = true;
        
        for (int i = 0; i < N; i++) {
            Student s = students.get(i);
            if (s.mark != prevMark) {
                distinctCount++;
                prevMark = s.mark;
            }
            if (distinctCount > K) {
                break;
            }
            if (!first) {
                sb.append(" ");
            }
            sb.append(s.idx);
            first = false;
        }
        
        System.out.println(sb.toString());
    }
}