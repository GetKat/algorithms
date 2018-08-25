#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fib_memo(int n, int *memo);

int main(){
	int num, *memo;

	scanf("%d", &num);
	memo = (int *) malloc( num * sizeof(int)); //assigning num integers to memo
	for(int i = 0; i < num; i++)
	  	memo[i] = -1;
	printf("%d", fib_memo(--num, memo)); //--num cause the array is 0-indexed
}

int fib_memo(int n, int *memo){
	int result;

	if(memo[n] != -1) //if I already calculated this fib number
		return memo[n]; //he is stored and I shall not re-calculate him

	if(n == 0|| n == 1) //base cases of fib recursion
		result = 1;
	else
		result = fib_memo(n-1, memo) + fib_memo(n-2, memo); //fib(n) = fib(n - 1) + fib(n - 2)
	memo[n] = result; //now that I calculated it for the first time, I shall store it
	return result;
}

