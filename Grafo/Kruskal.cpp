#include <vector>
#include <cstdio>
#include <algorithm> //std::sort
#include <numeric> //std::iota

using namespace std;

#define pb push_back

typedef pair<int, int> ii;
typedef pair<int, ii> iii;

vector<iii> edges, result;
int n, m; //number of vertices and edges

struct UnionFind{
    vector<int> dad;

    UnionFind(int n){
        dad.resize(n);
        iota(dad.begin(), dad.end(), 0);
    }

    int finds(int u){
        if(u == dad[u])
            return u;
        return finds(dad[u]);
    }

    void unions(int u, int v){
        if(finds(u) == finds(v))
            return;
        dad[u] = dad[dad[v]];
    }
};


int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        edges.pb({w, {u, v}});
    }
    sort(edges.begin(), edges.end());
}


void kruskal(){
    UnionFind uf(n);
    int cost = 0;

    for(iii e : edges){
        int w = e.first;
        int u = e.second.first;
        int v = e.second.second;
        if(uf.finds(u) != uf.finds(v)){
            uf.unions(u, v);
            cost += w;
            result.push_back({w, {u, v}});
        }
    }
    // result will de the minimum spanning tree
    //  and cost will be the cost to build

}