#include <stdio.h>
#include <string.h>
#include "fonksiyonlar.h"


int main() {

    static int hafizaSayaci = -1;
    int secim = 0;
 /*   char satir[200] = "";

    FILE* filePtr;
    errno_t err = fopen_s(&filePtr, "earthquake.csv", "r+");
    if (filePtr == 0)
    {
        printf("dosya nerde !!!");
        return 0;
    }

    Deprem deprem1;
    DepremPtr deprem1Ptr = &deprem1;


    // fgets(satir, 199, filePtr);

    for (int i = 0; i < 20; i++)
    {

        //hepsini yazdiriyoruz calisiyor mu diye bakmak icin

        fgets(satir, 199, filePtr);
        deprem1Ptr = yapiyaTasima(satir);


    }
    */


     printf("Deprem Sorgu Ve Raporlama Sistemine Hosgeldiniz\n");
     printf("Lutfen Seciminizi Yapýnýz:\nMENU:\n(1)Sorgulama\n(2)Siralama\n(3)Kaydetme\n(4)Ayristirma\n(5)Analiz\n(6)Cikis\n");
     scanf_s("%d", &secim);

        switch (secim)
        {
        case 1:

            //deprem1Ptr = yapiyaTasima(satir);
            sorgula();

            break;
            //    case 2 : siralama(); break;
            //    case 3 : kaydetme(); break;
            //    case 4 : ilAyristirma(); break;
            //    case 5 : analiz(); break;
            //    case 6 : cikis(); break;
        default:
            printf("Gecersiz bir secim yaptiniz.!!!!!");
            break;

        }


    return 0;
}
