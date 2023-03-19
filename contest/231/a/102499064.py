n=int(input())
i=0
ans=0
while i<n:
    petya, vasya, tonya = raw_input().split()
    petya=int(petya)
    tonya=int(tonya)
    vasya=int(vasya)
    if petya==1 and vasya==1 or petya==1 and tonya==1 or vasya==1 and tonya ==1:
        ans=ans+1
    i=i+1
print(ans)

