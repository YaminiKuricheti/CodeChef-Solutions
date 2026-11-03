// Problem: PROBLEM LINK:
// Platform: codechef
// Language: for _ in range(int(input())):
    x, y, z = map(int, input().split())
    if x > max(y, z):
        print('Setter')
    elif y > max(x, z):
        print('Tester')
    else:
        print('Editorialist')
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP11_V2/problems/SPECIALITY?tab=solution
// Solved on: 2026-11-03T15:41:45.943Z

for _ in range(int(input())):
    x, y, z = map(int, input().split())
    if x > max(y, z):
        print('Setter')
    elif y > max(x, z):
        print('Tester')
    else:
        print('Editorialist')