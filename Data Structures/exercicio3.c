#include <string.h>

struct clientela{
	char nome[50];
	long long int cpf;
};

struct tot{
	float entrada, saida;
};

struct agencias{
	struct tot totinvest;
};

struct bancos{
	struct agencias agen[50];
	char sigla[50];
};

struct clientela cliente[50];
struct agencias agencia[50];
struct bancos banco[50];


int main(){
	int i, j, k;
	strcpy(cliente[k].nome, "alex silva");
	agencia[i].totinvest.entrada = 30000.00;
	agencia[i].totinvest.saida = 59837.49;
	banco[j].agen[i] = agencia[i];
	cliente[k].cpf = 132388521725;
	strcpy(banco[j].sigla, "B145");
}

