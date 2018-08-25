#include <stdio.h>

long long fib(int n);

int main(){
    int n;
    scanf("%d", &n);

    printf("%lld\n", fib(--n));
    return 0;
}

long long fib(int n){
    if(n == 0 || n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}