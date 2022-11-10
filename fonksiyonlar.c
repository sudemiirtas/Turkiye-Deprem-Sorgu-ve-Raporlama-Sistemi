#include"fonksiyonlar.h"
#include<stdio.h>
#include<string.h>
 double sorgula(){


      FILE *filePtr;
      char satir1[200]="";
      char satir2[200]="";
      char *kalan1="";
      char *kalan2="";

     struct depremBilgisi hi;
      errno_t err=fopen_s(&filePtr,"earthquake.csv","r+");

      if(filePtr==0)
   {
      printf("dosya nerde !!!");
      return 0;
   }
   else	
   {
   	  fgets(satir1,"",filePtr);
      fgets(satir2,"",filePtr);
		
      hi.id=strtok_s(satir2,",", &kalan1);
      hi.date=strtok_s(kalan1,",", &kalan2);
      hi.time=strtok_s(kalan2,",", &kalan1);
      hi.latitude=strtok_s(kalan1,",", &kalan2);
      hi.longtitude=strtok_s(kalan2,",", &kalan1);
      hi.country=strtok_s(kalan1,",", &kalan2);
      hi.city=strtok_s(kalan2,",", &kalan1);
      hi.area=strtok_s(kalan1,",", &kalan2);
      hi.direction=strtok_s(kalan2,",", &kalan1);
      hi.distance=strtok_s(kalan1,",", &kalan2);
      hi.depth=strtok_s(kalan2,",", &kalan1);
	  hi.xm=strtok_s(kalan1,",", &kalan2);
      hi.md=strtok_s(kalan2,",", &kalan1);
      hi.richter=strtok_s(kalan1,",", &kalan2);
      hi.mw=strtok_s(kalan2,",", &kalan1);
      hi.ms=strtok_s(kalan1,",", &kalan2);
      hi.mb=strcpy_s(kalan2);
	
	  printf("%s " , hi.id);
      printf("%s " , hi.date);
      printf("%s " , hi.time);
      printf("%s " , hi.latitude);
      printf("%s " , hi.longtitude);
      printf("%s " , hi.country);
      printf("%s " , hi.city);
      printf("%s " , hi.area);
      printf("%s " , hi.direction);
      printf("%s " , hi.distance);
      printf("%s " , hi.depth);
      printf("%s " , hi.xm);
      printf("%s " , hi.md);
      printf("%s " , hi.richter);
      printf("%s " , hi.mw);
      printf("%s " , hi.ms);
      printf("%s " , hi.mb);
      
   }
     
     
      fclose(filePtr);





    return 0;


}