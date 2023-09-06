#include<stdio.h>
#include<conio.h>



int temp = 1; // ekok olacak global deðiþken


//recursive fonksiyon
int EKOK(int sayi1 , int sayi2){
	
	if(temp % sayi1 == 0 && temp % sayi2 == 0) 
	return temp;
	
	else{ 
		temp++;
		return EKOK(sayi1,sayi2);
	}
	
}



//ana fonskiyon
int main(){
	
	int sayi1 , sayi2 , sonuc; 
	
	printf(" Birinci Sayiyi Giriniz = ");
	scanf("%d",&sayi1); 
	
	printf(" Ikinci Sayiyi Giriniz = "); 
	scanf("%d",&sayi2);
	
	sonuc = EKOK(sayi1,sayi2); 
	
	printf(" EKOK(%d,%d) = %d",sayi1,sayi2,sonuc); 
	
	return 0;
}
 
 
 //ekok bulan porgram
