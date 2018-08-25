#include <string.h>

struct product{
	int estoque;
	int peca[60];
};

struct deptop{
	struct product xx;
	char z[40];
};

struct sector{
	char nome[30];
	struct deptop indice;
};

struct product produto;
struct deptop depto;
struct sector setor[30];

int main(){

	int i, k;
	produto.estoque = 2000;
	produto.peca[i] = 3;
	depto.xx = produto;
	strcpy(depto.z, "informatica");
	setor[k].indice = depto;
	strcpy(setor[k].nome, "almoxarifado");
}