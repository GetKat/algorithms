#include <stdio.h>

typedef struct pessoa{ char nome[123]; int idade; } Pessoa;

typedef int inteiro;

inteiro main(){
	Pessoa eu;
	inteiro i = 12;
	printf("%d\n", i);
}

