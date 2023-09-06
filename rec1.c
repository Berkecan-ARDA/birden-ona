#include <stdio.h>
long faktoriyel(long n){
if (n <= 1)
return 1;
else
return (n*faktoriyel(n - 1));
}

int main(void){
int i;

for (i = 0; i <= 10; i++) {
printf("%d! = %d\n", i, faktoriyel(i));
}
return 0;
}

//0 dan 10 a kadar sayýlarýn faktoriyelini yazdýran program
