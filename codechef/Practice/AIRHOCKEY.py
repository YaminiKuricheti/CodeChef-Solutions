// Problem: AIRHOCKEY
// Platform: codechef
// Language: Python3​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP07_V2/problems/AIRHOCKEY?tab=statement
// Solved on: 2026-10-31T16:06:49.207Z

# cook your dish here
for i in range(int(input())):
    a, b = map(int, input().split())
    if(a > b):
        print(abs(a - 7))
    else:
        print(abs(b -7))