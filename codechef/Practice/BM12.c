// Problem: BM12
// Platform: codechef
// Language: #Solution as follows

t = int(input())
for i in range(t):
    X, N = map(int, input().split())
    #Since we used the '/' operator, it returned a decimal value instead of the expected integral value
    points_per_testcase = X//10
    score = points_per_testcase*N
    print(score)
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP06_V2/problems/BM12?tab=solution
// Solved on: 2026-10-31T16:01:52.264Z

#Solution as follows

t = int(input())
for i in range(t):
    X, N = map(int, input().split())
    #Since we used the '/' operator, it returned a decimal value instead of the expected integral value
    points_per_testcase = X//10
    score = points_per_testcase*N
    print(score)