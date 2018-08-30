#include <cstdio>
#include <vector>
#include <queue>
// #include <set>

using namespace std;

typedef pair<int, int> ii;

#define MAXN 128
#define oo 0x3f3f3f

void dijkstra(int u);

vector<ii> graph[MAXN];
int n, m; // number of vertices and edges(input)

int main(){
    int start;

    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        graph[u].push_back({w, v});
        graph[v].push_back({w, u});
    }
    scanf("%d", &start);

    printf("Lista de adj:\n");
    for(int i = 0; i < MAXN; i++)
        if(graph[i].size()){
            printf("%d -> ", i);
            for(ii v : graph[i])
                printf("%d ", v.second);
            printf("\n");
        }

    dijkstra(start);
}

void dijkstra(int u){ //calcula a menor distancia de start ate todos os vertices
    priority_queue<ii, vector<ii>, greater<ii> > q; //
    // set<ii> s;

    vector<int> dist(n, oo); // distance to all vertices inicially is infinity

    // s.insert({0, u});
    dist[u] = 0; //distance to it self is 0
    q.push({0, u});

    // while(!s.empty())
    while(!q.empty()){
        int v = q.top().second; q.pop();
        // auto it = s.begin();
        // int v = (*it).second;
        // s.erase(it);
        for(ii e : graph[v]){
            int u = e.second;
            int w = e.first;

            if(dist[v] + w < dist[u]){
                dist[u] = dist[v] + w;
                // s.insert({dist[u], u});
                q.push({dist[u], u});
            }
        }
    }

    printf("Lista de distancias:\n");
    for(int i = 0; i < n; i++)
        printf("%d %d\n", i, dist[i]);
}   
