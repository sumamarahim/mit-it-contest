# Problem link: https://mitit.org/Contest/Submission/he8b5O7TbpOP

def solve():
    t = int(input())  
    for _ in range(t):
        n = int(input()) 
        min_s = float('inf')  
        max_s = float('-inf') 

        for _ in range(n):
            x, y = map(int, input().split()) 
            s = x + y

           
            if s < min_s:
                min_s = s
            if s > max_s:
                max_s = s


        print(2 * (max_s - min_s))

solve()
