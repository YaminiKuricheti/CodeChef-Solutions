// Problem: BM06
// Platform: codechef
// Language: #solution as follows

t = int(input())
for i in range(t):
    X = int(input())
    #Create a new variable Y for total distance. 
    #5 days a week - Chef will travel 2*X daily - i.e. return trip walk to office
    Y = 2 * X * 5           
    #Output distance traveled for each test case
    print(Y)
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP05_V2/problems/BM06?tab=solution
// Solved on: 2026-10-31T16:00:42.408Z

#solution as follows

t = int(input())
for i in range(t):
    X = int(input())
    #Create a new variable Y for total distance. 
    #5 days a week - Chef will travel 2*X daily - i.e. return trip walk to office
    Y = 2 * X * 5           
    #Output distance traveled for each test case
    print(Y)                