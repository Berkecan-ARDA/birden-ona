#include <stdio.h>
int sum(int n);

int main() {
    int sayi, sonuc;
//kullan�c�dan tam sa� aliyorum
    printf("Tam sayi giriniz: ");
    scanf("%d", &sayi);

    sonuc = sum(sayi);

    printf("toplam = %d", sonuc);
    return 0;
}

int sum(int n) {
    if (n != 0)
        return n + sum(n-1); 
    else
        return n;
}

//kendisi ve ondan �nce gelen say�lar� toplayan program
