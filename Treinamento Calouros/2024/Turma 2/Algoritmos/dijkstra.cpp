const int mxn = 1e5+5;
const int INF = 0x3f3f3f3f;

int n, dist[mxn], memo[mxn];
vector<int> vec[mxn];

void dj(int x){
    for(int i=1; i<=n; i++){
        dist[i] = INF;
        memo[i]=0;
    }

    dist[x] = 0;

    priority_queue<pair<int, int> > fila;

    fila.push({0, x});

    while(!fila.empty()){
        int d = -fila.top().first, u = fila.top().second;

        fila.pop();

        if(memo[u]) continue;
        memo[u]=1;

        for(pair<int, int> i:vec[u]){
            if(d + i.second < dist[i.first]){
                dist[i.first] = d + i.second;
                
                fila.push({-dist[i.first], i.first});
            }
        }
    }
    // dist[i] contém a menor distância de x até o vértice i
}