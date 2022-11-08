#include<stdio.h>
#include<stdlib.h>
#include <string.h>

 double sorgula()
 {
    FILE *dosya;
    char id[25000],date[10],time[10],lat[10],llong[10],country[10],city[10],area[10],direction[10],dist[10],depth[10],xm[10],md[10],richter[10],mw[10],ms[10],mb[10];
    int i=0;
    dosya=fopen("earthquake.csv","r");
    if (dosya!=NULL)
    {
           
        while (!feof(dosya))
        {
            fscanf(dosya,"%s %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c", &id[i], &date[i],&time[i],&lat[i],&llong[i],&country[i],&city[i],&area[i],&direction[i],&dist[i],&depth[i],&xm[i],&md[i],&richter[i],&mw[i],&ms[i],&mb[i]);
              printf("%s",id[5]);
        
            i++;
        }
     
    }
    else
    {
        printf("Dosya Bulunamadi.");
    }

    fclose(dosya);

    return 0;
 }