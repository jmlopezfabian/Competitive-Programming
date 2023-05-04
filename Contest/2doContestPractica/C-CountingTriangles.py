t = int(input())
while t:
    n,k = map(int, input().rstrip().split())
    
    ans = (k+1) * (((n+2) * (n+1)) // 2)
    ans = ans%1000000007
    print(ans)
    t -= 1
    