#https://neps.academy/br/exercise/567 - Manchas de Pele

def bfs(x, y):
    fila = []
    fila.append((x, y))

    while len(fila)>0:
        (x, y) = fila[0]
        fila.pop(0)

        #lembrando que a matriz está 0-indexada, assim a posição (0, 0) é válido, mas (-1, 0) não é
        if x<0 or x>=n or y<0 or y>=m or ma[x][y]==0 or vis[x][y]==1:
            continue

        vis[x][y]=1

        fila.append((x+1, y))
        fila.append((x-1, y))
        fila.append((x, y+1))
        fila.append((x, y-1))


n, m = [int(i) for i in input().split()]

ma = []

for i in range(n):
    linha = [int(i) for i in input().split()]
    ma.append(linha)

vis = [[0 for j in range(m)] for i in range(n)] #criando matriz NxM com todas as posições iguais a zero

resp = 0

for i in range(n):
    for j in range(m):
        if vis[i][j]==0 and ma[i][j]==1:
            resp+=1
            bfs(i, j)

print(resp)
