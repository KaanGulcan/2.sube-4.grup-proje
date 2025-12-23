#include <stdio.h>

int main(void)
{
    FILE *kfptr,*dfptr,*ofptr;
    kfptr=fopen("kodlar.txt","r");
    dfptr=fopen("d.txt","r");
    ofptr=fopen("orijinal.txt","w");
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
