#include<stdio.h>
#include<conio.h>



//rec kýsým
int Ozyinelemeli_Ust_Alma(int sayi,int ust){

	if(ust>0) 
	return (sayi*(Ozyinelemeli_Ust_Alma(sayi,ust-1))); 
	
	else 
	return 1; 
}



int main(){
	
	int sayi , ust , sonuc;
	printf("SAYI GIRINIZ = "); 
	scanf("%d",&sayi); 
	printf("UST GIRINIZ = "); 
	scanf("%d",&ust); 
	
	sonuc = Ozyinelemeli_Ust_Alma(sayi,ust); 
	printf("SONUC = %d",sonuc); 
	
	
	getch();
	return 0;
} 




