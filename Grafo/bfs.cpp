#include <queue>
#include <cstring> // memset()

using namespace std;

#define MAXN 128

// armazenamento por lista de adjacencia
vector<int> graph[MAXN];

void bfs(int u){ // u - origem
	queue<int> q; q.push(u);
    // vetor q armazena se um vertice foi visitado ou n
    int vis[MAXN];
    memset(vis, 0, sizeof(vis)); // iniciliza todas as casas de vis 
                                // mesma coisa q for(int i = 0; i < MANX; i++) vis[i] = 0;
	vis[u] = 1;
	
	while(!q.empty()){
		int u = q.front(); q.pop();

        // pra cada vizinho do vertice 'u'
		for(int v : graph[u]){
			if(!vis[v]){
				vis[v] = 1;
				q.push(v);
			}
		}
	}
}