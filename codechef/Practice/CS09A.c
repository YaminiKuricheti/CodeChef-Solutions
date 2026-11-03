// Problem: CS09A
// Platform: codechef
// Language: # Solution as follows

t=int(input())
for i in range(t):
    #We need to declare the type of variable
    X, Y = map(int, input().split())
    #The original code also had a logical error
    if Y>=X and Y<=(X+200):
        print('YES')
    else:
        print('NO')
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP10_V2/problems/CS09A?tab=solution
// Solved on: 2026-11-03T15:07:22.654Z

# Solution as follows

t=int(input())
for i in range(t):
    #We need to declare the type of variable
    X, Y = map(int, input().split())
    #The original code also had a logical error
    if Y>=X and Y<=(X+200):
        print('YES')
    else:
        print('NO')