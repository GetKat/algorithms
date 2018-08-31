#include <vector>

struct UnionFind{
	std::vector<int> dad;

	UnionFind(int n){
		dad.resize(n);

		//iota(dad.begin(), dad.end(), 0);
		for(int i = 0; i < n; i++)
			dad[i] = i;
	}

	int finds(int u){ //funcao para a achar a raiz
		if(dad[u] == u){ //ele eh seu propio pai
			return u;
		}
		dad[u] = finds(dad[u]);
		return dad[u];
	}

	bool unions(int u, int v){ //unir o conjunto v ao conjunto u
		if(finds(u) == finds(v))
			return false;
		dad[dad[v]] = dad[u]; //agora compartilham a mesma raiz
		return true;
	}
}