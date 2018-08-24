#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	int *memo;
	int i;
//	scanf("%d",&num);
	num=25;
	memo=(int *)malloc((num+1)*sizeof(int));
	for(i=0;i<=num;i++)
		memo[i]=0;
	printf("%d",fib_memo(num,memo));
}
int fib_memo(int n,int *memo){
	int result;
	if(memo[n]!=0)
		return memo[n];
	if(n==1||n==2)
		result=1;
	else
		result=fib_memo(n-1,memo)+fib_memo(n-2,memo);
	memo[n]=result;
	return result;
}

