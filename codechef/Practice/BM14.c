// Problem: BM14
// Platform: codechef
// Language: #Solution as follows

t = int(input())
for i in range(t):
    A, B, C = map(int, input().split())
    maximum = max(A,B,C)
    minimum = min(A,B,C)
    D = maximum - minimum
    #print command to output 'D' to the console was missing
    print(D)
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP08_V2/problems/BM14?tab=solution
// Solved on: 2026-10-31T16:05:15.883Z

#Solution as follows

t = int(input())
for i in range(t):
    A, B, C = map(int, input().split())
    maximum = max(A,B,C)
    minimum = min(A,B,C)
    D = maximum - minimum
    #print command to output 'D' to the console was missing
    print(D)        