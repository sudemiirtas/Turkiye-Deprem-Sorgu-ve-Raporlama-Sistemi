#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct depremBilgisi {

    char* id;
    char* date;
    char* time;
    char* latitude;
    char* longtitude;
    char* country;
    char* city;
    char* area;
    char* direction;
    char* distance;
    char* depth;
    char* xm;
    char* md;
    char* richter;
    char* mw;
    char* ms;
    char* mb;
};

typedef struct depremBilgisi Deprem;
typedef struct depremBilgisi* DepremPtr;

DepremPtr yapiyaTasima(char string[]);
void satirYazdir(DepremPtr depremPtr);
void sorgula();
DepremPtr bul(int i);
int hafizayaEkle(DepremPtr depremPtr, DepremPtr dizi[]);
void hafizaYazdir(DepremPtr hafiza[], const int length);