#include "fonksiyonlar.h"


DepremPtr yapiyaTasima(char string[]) {


    char* kalan1 = "";
    char* kalan2 = "";
    Deprem deprem;
	DepremPtr depremPtr = &deprem;

    deprem.id = strtok_s(string, ",", &kalan1);
    deprem.date = strtok_s(kalan1, ",", &kalan2);
    deprem.time = strtok_s(kalan2, ",", &kalan1);
    deprem.latitude = strtok_s(kalan1, ",", &kalan2);
    deprem.longtitude = strtok_s(kalan2, ",", &kalan1);
    deprem.country = strtok_s(kalan1, ",", &kalan2);
    deprem.city = strtok_s(kalan2, ",", &kalan1);
    deprem.area = strtok_s(kalan1, ",", &kalan2);
    deprem.direction = strtok_s(kalan2, ",", &kalan1);
    deprem.distance = strtok_s(kalan1, ",", &kalan2);
    deprem.depth = strtok_s(kalan2, ",", &kalan1);
    deprem.xm = strtok_s(kalan1, ",", &kalan2);
    deprem.md = strtok_s(kalan2, ",", &kalan1);
    deprem.richter = strtok_s(kalan1, ",", &kalan2);
    deprem.mw = strtok_s(kalan2, ",", &kalan1);
    deprem.ms = strtok_s(kalan1, ",", &kalan2);
    deprem.mb = strtok_s(kalan2, "", &kalan1);

   // printf("%s", deprem.mb);


    //satirYazdir(depremPtr);
    


    return depremPtr;

}


void satirYazdir(DepremPtr depremPtr) {

  /* Deprem gelenDeprem;
    DepremPtr gelenDepremPtr = deprem;
  */
   // kaydet();

    if (strlen(depremPtr->id) != 0)
    {
        printf("%s ", depremPtr->id);
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->date) != 0)
    {
        printf("%s ", depremPtr->date);
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->time) != 0)
    {
        printf("%s ", depremPtr->time);

    }
    else {
        printf("");
    }
    if (strlen(depremPtr->latitude) != 0)
    {
        printf("%s ", depremPtr->latitude);
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->longtitude) != 0)
    {
        printf("%s ", depremPtr->longtitude);
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->country) != 0)
    {
        printf("%s ", depremPtr->country);
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->city) != 0)
    {
        printf("%s ", depremPtr->city);
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->area) != 0)
    {
        printf("%s ", depremPtr->area);
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->direction) != 0)
    {
        printf("%s ", depremPtr->direction);
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->distance) != 0)
    {
        printf("%.1f ", atof(depremPtr->distance));
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->depth) != 0)
    {
        printf("%.1f ", atof(depremPtr->depth));
    }
    else {
        printf("");
    }
  /*  if (strlen(depremPtr->xm) != 0)
    {
        printf("%.1f ", atof(depremPtr->xm));
    }
    else {
        printf("");
    }*/
    if (strlen(depremPtr->md) != 0)
    {
        printf("%.1f ", atof(depremPtr->md));
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->richter) != 0)
    {
        printf("%.1f ", atof(depremPtr->richter));
    }
    else {
        printf("");
    }
    if (strlen(depremPtr->mw) != 0)
    {
        printf("%.1f ", atof(depremPtr->mw));
    }
    else {
        printf("");
    }
    /*if (strlen(depremPtr->ms) != 0)
    {
        printf("%.1f ", atof(depremPtr->ms));
    }
    else {
        printf("");
    }*/
    if (strlen(depremPtr->mb) != 0)
    {
        printf("%.1f ", atof(depremPtr->mb));
    }
    else {
        printf("");
    }
    printf("\n");



    /*
    printf("%s ", depremPtr->id);
    printf("%s ", depremPtr->time);
    printf("%s ", depremPtr->latitude);
    printf("%s ", depremPtr->longtitude);
    printf("%s ", depremPtr->country);
    printf("%s ", depremPtr->city);
    printf("%s ", depremPtr->area);
    printf("%s ", depremPtr->direction);
    printf("%.1f ", atof(depremPtr->distance));
    printf("%.1f ", atof(depremPtr->depth));
    printf("%.1f ", atof(depremPtr->xm));
    printf("%.1f ", atof(depremPtr->md));
    printf("%.1f ", atof(depremPtr->richter));
    printf("%.1f ", atof(depremPtr->mw));
    printf("%.1f ", atof(depremPtr->ms));
    printf("%.1f ", atof(depremPtr->mb));
    */
    

}

void sorgula() {

    int secim = 0;

    printf("Hangi Kritere Gore Siralamak Istiyorsunuz?\n");
    printf("Secenekler:\n[1]Zaman Araligi\n[2]Il\n[3]Ilce\n[4]Richter Buyuklugu\n");
    scanf_s("%d", &secim);
    bul(secim);

  
}
DepremPtr bul(int gelen) {

    char ara[20];
    ara[19] = '\0';
    char satir[200] = "";
    int i;

    FILE* filePtr;
    fopen_s( &filePtr,"Earthquake.csv", "r");
    if (filePtr == 0)
    {
        printf("dosya nerde !!!");
      	return NULL;
    }

    Deprem deprem1;
    DepremPtr deprem1Ptr = &deprem1;
    DepremPtr hafiza[11850];
    int hafizaSonElemani = 0;



        if (gelen == 2)
        {

            printf("Hangi Ili Aramak Istiyorsunuz\n");
            scanf_s("%s", &ara, 19);

            for (i = 0; i < 24008; i++)
            {

                fgets(satir, 199, filePtr);
                deprem1Ptr = yapiyaTasima(satir);
          
                if (strcmp( deprem1Ptr->city,ara  ) == 0)
                {
                    satirYazdir(deprem1Ptr);
                    hafizaSonElemani = hafizayaEkle(deprem1Ptr, hafiza);

                }
                


            }

            fclose(filePtr);
            
            return hafiza;

        }
        else if (gelen == 3)
        {

            printf("Hangi Ilceyi Aramak Istiyorsunuz\n");
            scanf_s("%s", &ara, 19);

            for ( i = 0; i < 24008; i++)
            {

                fgets(satir, 199, filePtr);
                deprem1Ptr = yapiyaTasima(satir);

                if (strcmp(deprem1Ptr->area, ara) == 0)
                {
                    satirYazdir(deprem1Ptr);
                    hafizaSonElemani = hafizayaEkle(deprem1Ptr, hafiza);
                }
               


            }
            fclose(filePtr);

            return hafiza;
        }
        else if (gelen == 4)
        {

            printf("Hangi Richter Buyuklugunu Aramak Istiyorsunuz\n");
            scanf_s("%s", &ara, 19);

            for ( i = 0; i < 24008; i++)
            {

                fgets(satir, 199, filePtr);
                deprem1Ptr = yapiyaTasima(satir);

                if (strcmp(deprem1Ptr->richter, ara) == 0)
                {
                    satirYazdir(deprem1Ptr);
                  hafizaSonElemani = hafizayaEkle(deprem1Ptr, hafiza);
                }
            

            }
            fclose(filePtr);

            return hafiza;
        }
        else
        {
            printf("secim hatali");
            return NULL;
        }
    
}

int hafizayaEkle(DepremPtr depremPtr, DepremPtr dizi[]) {

    static int hafizaSayaci = -1;
    
        dizi[hafizaSayaci+1] = depremPtr;
        hafizaSayaci++;
        printf("   %d   \n",hafizaSayaci);

        return hafizaSayaci;
}
void hafizaYazdir(DepremPtr hafiza[], const int length) {











}