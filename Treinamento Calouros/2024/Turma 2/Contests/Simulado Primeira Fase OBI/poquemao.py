#https://neps.academy/br/exercise/8 - Po que mão

n = int(input())
x = int(input())
y = int(input())
z = int(input())

if x+y+z <= n:
    print(3)
else:
    if x+y<=n or x+z<=n or y+z<=n:
        print(2)
    else:
        if x<=n or y<=n or z<=n:
            print(1)
        else:
            print(0)