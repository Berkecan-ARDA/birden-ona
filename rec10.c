#include<stdio.h>

int asalcarpan(int num)
{
   int i = 2;
   if(num==1) return;
   while(num%i!=0) i++;
   printf("%d\n",i);
   asalcarpan(num/i);
}

int main()
{
   int number;

   printf("Pozitif tam sayi giriniz: ");
   scanf("%d",&number);

   printf("Asal Carpanlari  %d :\n",number);
   asalcarpan(number);

   return 0;
}

//asal çarpan bulan program
