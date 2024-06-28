const int mxn = 1e5+5;

int lv[mxn], sub[mxn];
vector<int> vec[mxn];

void dfs(int x, int p){
    lv[x] = lv[p] + 1;

    sub[x]=1;

    for(int i:vec[x]){
        if(i==p) continue;

        dfs(i, x);

        sub[x]+=sub[i];
    }
}

int main(){
    dfs(1, 0);
}