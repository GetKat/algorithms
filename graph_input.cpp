#include <cstdio>
#include <vector>

using namespace std;

#define MAXN 128 // numero max de vertices

vector<int> graph[MAXN];

int main(){
    int n; // numero de arestas

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int u, v;
        scanf("%d %d", &u, &v); // tem uma conexao (aresta) entre u e v
        graph[u].push_back(v); // o vertice u tem v em sua lista de adjacencia
        graph[v].push_back(u); // mesma coisa pro vertice v
    }
}