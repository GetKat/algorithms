#include <stdio.h>

int fib_bottom(int n);

int main(){
	int num;
	scanf("%d", &num);
	printf("%d", fib_bottom(num));
}

int fib_bottom(int n){ // retorna o n-esimo numero da sequencia fibonacci
	int i, fib[n];
	fib[0] = 1; // casos base
	fib[1] = 1;	 
	for(i = 2; i < n; i++) // do terceiro elemento ate o desejado
		fib[i] = fib[i - 1] + fib[i - 2]; // fib(n) = fib(n - 1) + fib(n - 2)
	return fib[n - 1];
} 
