#include <queue>
#include <cstring> // memset()

using namespace std;

#define MAXN 128

// armazenamento por lista de adjacencia
vector<int> graph[MAXN];
int vis[MAXN];

void dfs(int u){ // u - origem
    vis[u] = 1; // visitei a origem

    // pra todos os vizinhos de u
    for(int v : graph[u])
        if(!vis[v])   // hint: vis[] temq ser inicializado!! // se ele n estiver visitado, percorre
            dfs(v);
}