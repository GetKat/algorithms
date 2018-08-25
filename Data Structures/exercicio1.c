#include <stdio.h>
#include <string.h>

struct tape{
	int quant;
	float preco;
	char genero[30];
};

struct blockbuster{
	char endereco[30];
	struct tape fita[50];
};

struct blockbuster locadora[30];

int main(){
	int i, j, m;
	locadora[j].fita[m].quant = 20;
	strcpy(locadora[j].fita[m].genero, "acao");
	strcpy(locadora[j].endereco, "rua b");
	locadora[j].fita[m].preco = 25.50;
}