// Problem: REDNA
// Platform: codechef
// Language: Java​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/hashing/HASH04/problems/REDNA?tab=statement
// Solved on: 2026-10-15T16:47:43.085Z

import java.io.*;
import java.util.*;
public class Main {
    static final BufferedInputStream in=new BufferedInputStream(System.in);
    static String next() throws IOException {
        int c;do{c=in.read();}while(c!=-1 && c<=32);
        StringBuilder s=new StringBuilder();
        while(c>32 && c!=-1){s.append((char)c);c=in.read();}
        return s.toString();
    }
    static int nextInt() throws IOException{return Integer.parseInt(next());}
    public static void main(String[] args) throws Exception {
        String s=next();byte[] state=new byte[1<<20];
        List<Integer> repeated=new ArrayList<>();int code=0;
        for(int i=0;i<s.length();++i){
            char c=s.charAt(i);int v=c=='A'?0:c=='C'?1:c=='G'?2:3;
            code=((code<<2)|v)&((1<<20)-1);
            if(i<9)continue;
            if(state[code]==0)state[code]=1;
            else if(state[code]==1){state[code]=2;repeated.add(code);}
        }
        Collections.sort(repeated);
        PrintWriter out=new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        if(repeated.isEmpty())out.println(-1);
        for(int value:repeated){
            char[] word=new char[10];
            for(int z=9;z>=0;--z){word[z]="ACGT".charAt(value&3);value>>=2;}
            out.println(word);
        }
        out.flush();
    }
}