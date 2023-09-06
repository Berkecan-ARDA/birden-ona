#include <stdio.h>


long fibonacci(long n){
if (n == 0 || n == 1)
return n;
else
return fibonacci(n - 1) + fibonacci(n - 2);
}
//fib 1 dðerini bulana kadar devam
int main(void){
long i, n;
printf("How many fibonacci numbers?:");
scanf("%d", &n);

for (i = 1; i <= n ; i++){
printf("Number %d: %ld\n", i, fibonacci(i));
}
return 0;
}


//fibonacci
