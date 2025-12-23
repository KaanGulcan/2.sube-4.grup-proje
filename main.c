#include <stdio.h>

int main(int)
{
    FILE *kfptr,*dfptr,*ofptr;
    kfptr=fopen("kodlar.txt","r");
    dfptr=fopen("d.txt","r");
    ofptr=fopen("orijinal.txt","w");

    if (!dfptr) {
        printf("Hata: d.txt bulunamadi!\n");
        return 1;
    }
    if (!kfptr) {
        printf("Hata: kodlar.txt bulunamadi!\n");
        return 1;
    }
    if (!ofptr) {
        printf("Hata: orijinal.txt olusturulamadi!");
        return 1;
    }

    int sayac=0,kod;
    while(!feof(dfptr))
    {
        fgetc(dfptr);
        sayac++;
    }
    rewind(dfptr);

    char karakterler[sayac];
    sayac=0;
    while (!feof(dfptr))
    {
        karakterler[sayac]=fgetc(dfptr);
        sayac++;
    }

    while(!feof(kfptr))
    {
        fscanf(kfptr,"%d ",&kod);
        if(kod > 0 && kod <= sayac) {
            fprintf(ofptr,"%c",karakterler[kod-1]);   
        } else {
            printf("%d indisi bulunmadigi icin atlandi\n", kod);
        }
    }
    fclose(kfptr);
    fclose(dfptr);
    fclose(ofptr);
    return 0;
}
