#include <stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	printf("%d",fib_bottom(num));
}
int fib_bottom(int n){
	int i,fib[n];
	fib[1-1]=1;
	fib[2-1]=1;
	for(i=3-1;i<n;i++)
		fib[i]=fib[i-1]+fib[i-2];
	return fib[n-1];
} 
