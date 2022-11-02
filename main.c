//210501012_Sude.Demirtas
//Erman Atik
//Ali Aksoy 
//Türkiye Deprem Sorgu ve Raporlama Sistemi 

#include<stdio.h>
#include<stdlib.h>


/*double sorgula();
siralama();
kaydetme();
ilAyristir();
analiz();*/

int main(){

    int secim;
    printf("Deprem Sorgu Ve Raporlama Sistemine Hosgeldiniz\n");
    printf("Lutfen Seciminizi Yapınız:\nMENU:\n(1)Sorgulama\n(2)Siralama\n(3)Kaydetme\n(4)Ayristirma\n(5)Analiz\n(6)Cikis\n");
    scanf("%d",secim);
     switch(secim)
    {
       case 1 : sorgula(); break;  
       case 2 : siralama(); break;
       case 3 : kaydetme(); break;
       case 4 : ilAyristirma(); break;
       case 5 : analiz(); break;
       case 6 : cikis(); break;
       default : printf("Gecersiz bir secim yaptiniz.!!!!!"); break; 
    }
   
    return 0;
}
