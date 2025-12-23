#include <stdio.h>

int main(void)
{
    FILE *kfptr,*dfptr,*ofptr;
    kfptr=fopen("C:\\Users\\Projects\\data\\kodlar.txt.txt","r");
    dfptr=fopen("C:\\Users\\Projects\\data\\d.txt.txt","r");
    ofptr=fopen("C:\\Users\\Projects\\data\\orijinal.txt.txt","w");
    int sayac=0,i=0,kod;
    while(!feof(dfptr))
    {
        fgetc(dfptr);
        sayac++;
    }
    rewind(dfptr);
    char karakterler[sayac];
    while (!feof(dfptr))
    {
        karakterler[i]=fgetc(dfptr);
        i++;
    }
    while(!feof(kfptr))
    {
        fscanf(kfptr,"%d ",&kod);
        fprintf(ofptr,"%c",karakterler[kod-1]);
    }
    fclose(kfptr);
    fclose(dfptr);
    fclose(ofptr);
    return 0;
}