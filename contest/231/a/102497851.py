n=int(input())
i=0
ans=0
while i<n:
    #inputs = list(map(int,input().split()))
    petya, vasya, tonya= list(map(int,input().split()))
    #petya=int(input())
    #vasya=int(input())
    #tonya=int(input())
    #petya, vasya, tonya = map(int,input().split())
    if petya==1 and vasya==1 or petya==1 and tonya==1 or vasya==1 and tonya ==1:
        ans=ans+1
    i=i+1
print(ans)






