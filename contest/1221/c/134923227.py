t=input()
t=int(t)
for i in range(t):
    c,m,x=map(int, input().split())
    print(min({c,m,(x+c+m)//3}))
