// Problem: BM17
// Platform: codechef
// Language: #Solution as follows

t = int(input())
for i in range(t):
    X, Y, Z = map(int,input().split())
    #Y people move out of the town
    total_population = X - Y
    #Logical error in this line. 'Z' people immigrated to this town - so its population will increase
    total_population = total_population + Z
    print(total_population)
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP06_V2/problems/BM17?tab=solution
// Solved on: 2026-10-31T16:02:05.458Z

#Solution as follows

t = int(input())
for i in range(t):
    X, Y, Z = map(int,input().split())
    #Y people move out of the town
    total_population = X - Y
    #Logical error in this line. 'Z' people immigrated to this town - so its population will increase
    total_population = total_population + Z
    print(total_population)