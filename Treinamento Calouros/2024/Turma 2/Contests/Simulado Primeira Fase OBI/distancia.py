#https://neps.academy/br/exercise/466 - Distância entre Amigos

n = int(input())
v = [int(i) for i in input().split()]

# sabemos que a distância entre dois prédios (i, j), tal que i<j, é igual a v[i] + v[j] + (j-i)
# manipulando a equação, temos (v[i]-i) + (v[j]+j), logo podemos testar todos os j's, e para cada j, pegar o maior de v[i]-i, que veio antes dele

resp = 0
best = v[0]-0

for j in range(1, n):
    resp = max(resp, v[j]+j + best)

    best = max(best, v[j]-j)

print(resp)