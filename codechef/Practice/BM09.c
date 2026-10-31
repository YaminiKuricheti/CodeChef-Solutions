// Problem: BM09
// Platform: codechef
// Language: # Solution as follows

t = int(input())                
for i in range(t):              
    #Accept 2 integers inputs.
    N, M = map(int, input().split())         
    #Declare a new variable to store the 5 seater capacity
    five_seat_capacity = N*5    
    #Declare a new variable to store the 7 seater capacity
    seven_seat_capacity = M*7   
    #Print the desired output for each test case
    print(five_seat_capacity+seven_seat_capacity)
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP08_V2/problems/BM09?tab=solution
// Solved on: 2026-10-31T16:04:20.645Z

# Solution as follows

t = int(input())                
for i in range(t):              
    #Accept 2 integers inputs.
    N, M = map(int, input().split())         
    #Declare a new variable to store the 5 seater capacity
    five_seat_capacity = N*5    
    #Declare a new variable to store the 7 seater capacity
    seven_seat_capacity = M*7   
    #Print the desired output for each test case
    print(five_seat_capacity+seven_seat_capacity)