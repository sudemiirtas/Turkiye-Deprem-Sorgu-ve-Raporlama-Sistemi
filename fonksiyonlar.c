#include "fonkiyonlar.h"


DepremPtr yapiyaTasima(char string[]) {


	char* kalan1 = "";
	char* kalan2 = "";

    Deprem deprem;


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
    deprem.mb = strtok_s(kalan2, "\0", &kalan1);

    printf("%s ", deprem.id);
    printf("%s ", deprem.date);
    printf("%s ", deprem.time);
    printf("%s ", deprem.latitude);
    printf("%s ", deprem.longtitude);
    printf("%s ", deprem.country);
    printf("%s ", deprem.city);
    printf("%s ", deprem.area);
    printf("%s ", deprem.direction);
    printf("%s ", deprem.distance);
    printf("%s ", deprem.depth);
    printf("%s ", deprem.xm);
    printf("%s ", deprem.md);
    printf("%s ", deprem.richter);
    printf("%s ", deprem.mw);
    printf("%s ", deprem.ms);
    printf("%s ", deprem.mb);



    return &deprem;

}

void sorgula() {

    int secim = 0;

    printf("Hangi Kritere Gore Siralamak Istiyorsunuz?\n");
    printf("Secenekler:\n[1]Zaman Araligi\n[2]Il\n[3]Ilce\n[4]Richter Buyuklugu\n");
    scanf_s("%d", &secim);

	Deprem deprem1;
	DepremPtr deprem1Ptr=&deprem1;
	
	FILE* filePtr;
	char satir[200]="";
	errno_t err=fopen_s(&filePtr,"earthquake.csv","r+");
	
	if(filePtr==0)
	{
		printf("dosya nerde!!!!");
		return 0;
	}
	int i;
	for(i=0;i<20968;i++) //bul fonk icin

	{
		fgets(satir,199,filePtr);
		deprem1Ptr=yapiyaTasima(satir);
	}

	//if(strlen(deprem.id)==0){
	//	printf(" ");


}
char bul(){
	
	Deprem hi;
	char ara[20];
	printf("Aramak Istediginizi Girin\n");
	scanf("%s",&ara);
	FILE *filePtr;
	errno_t err=fopen_s(&filePtr,"earthquake.csv","r+");
	
	hi.city=(char*)malloc(sizeof(char)*100);
	//deprem.country=(char*)malloc(sizeof(char)*100);
	
	while(!feof(filePtr)){
		fscanf(filePtr,"%s ",hi.city);
		
		if(strcmp(hi.city,ara)==0)
		{
			printf("%s\n",hi.city);
		}
		fclose(filePtr)	;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}