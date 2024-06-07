#https://neps.academy/br/exercise/8 - Pares de Números

n, I, F = [int(i) for i in input().split()]
v = [int(i) for i in input().split()]

resp = 0

for i in range(n):
    for j in range(i+1, n):
        if v[i]+v[j]>=I and v[i]+v[j]<=F:
            resp+=1

print(resp)