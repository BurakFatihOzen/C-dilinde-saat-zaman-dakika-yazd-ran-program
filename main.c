#include<stdio.h>

int main(){

    int saniye,dakika,saat;

    printf("Sureyi giriniz (saniye olarak):");
    scanf("%d",&saniye);

    dakika=saniye/60;
    saat=dakika/60;
    saniye=saniye%60;
    dakika=dakika%60;

    printf("%d saat  %d dakika  %d saniye",saat,dakika,saniye);

    return 0;

//Burak Fatih Özen-23181616012


}
