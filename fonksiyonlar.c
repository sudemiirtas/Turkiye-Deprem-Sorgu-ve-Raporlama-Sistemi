#include"fonksiyonlar.h"
#include<stdio.h>

 double sorgula(){


      FILE *filePtr;
      char satir1[200]="";
      char satir2[200]="";
      char *kalan1="";
      char *kalan2="";

     struct depremBilgisi hi;
      errno_t err=fopen_s(&filePtr,"earthquake.csv","r");

      if(filePtr==0)
   {
      printf("dosya nerde !!!");
      return 0;
   }
      fgets(satir1,159,filePtr);
      fgets(satir2,159,filePtr);

      hi.id =strtok_s(satir2,",",&kalan2);
      hi.date=strtok_s(kalan1,",",&kalan2);
      hi.time=strtok_s(kalan2,",",&kalan1);


        printf("%s ", hi.id);
        printf("%s ", hi.date);
        printf("%s ", hi.time);

      fclose(filePtr);





    return 0;

