#include <stdio.h>
char isim[50];
char numara[100];
char ara[50];
void adresEkle(){
    printf("İsim giriniz\n");
    
    scanf("%s",isim);

    printf("Numara Giriniz\n");
    
    scanf("%s",&numara);
    printf("%s isimli kişi rehbere %s numarası ile kayıt edilmiştir",isim,numara);
    printf("Ana menüye geçiş yapılıyor...");
    main();
}

int main(){
    int secim;
    printf( "Telefon rehberine hoş geldiniz!\nLütfen bir işlem seçiniz\n1-Kayıt\n2-Arma Yap\n99-Çıkış\n> ");
    scanf( "%d", &secim);
    
    if (secim == 1)
    {
       /* code */
       adresEkle();
    }
    else if (secim == 2)
    {
      printf("Kimi aramak istiyorsun\n");
      printf("%s\n%s\n\n",isim,numara);
      scanf( "%s",ara);
      printf("%s isimli kişi aranıyor...",isim);
    }
    else{
      printf("Çıkış yapılıyor...");
    }
   return 0;
 
}
