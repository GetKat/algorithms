#include <stdio.h>
#include <stdlib.h>

int fib_memo(int n, int *memo);

int main(){
	int num, *memo;

	scanf("%d", &num);
	memo = (int *) malloc( num * sizeof(int)); // assigning num integers to memo

	for(int i = 0; i < num; i++)
	  	memo[i] = -1; // having a -1 value means that the fib number is not yet calculated

	printf("%d", fib_memo(--num, memo)); // --num cause the array is 0-indexed
}

int fib_memo(int n, int *memo){
	if(memo[n] != -1) // if I already calculated this fib number
		return memo[n]; // he is stored and I shall not re-calculate him
	return memo[n] = (!n || n == 1) ? 1 : fib_memo(n - 1, memo) + fib_memo(n - 2, memo);
	// base cases (n == 0 and n == 1) else recursive formula fib(n) = fib(n - 1) + fib(n - 2)
}

