#include <stdio.h>

int main(void)
{
    // Dosya işaretçilerini tanımlama ve dosyaları açma işlemleri
    FILE *kfptr,*dfptr,*ofptr;
    kfptr=fopen("kodlar.txt","r");
    dfptr=fopen("d.txt","r");
    ofptr=fopen("orijinal.txt","w");

    // Dosyaların varlığının ve oluşturulabilirliğinin kontrol edilmesi
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

    // d.txt içindeki metnin uzunluğunu bulabilmek -ve sonrasında karakterler dizisinin boyutunda kullanmak- üzere metin dosyası üzerinde dönen bir döngü
    int sayac=0,kod;
    while(!feof(dfptr))
    {
        fgetc(dfptr);
        sayac++;
    }
    rewind(dfptr); // dosyayı okurken kullanılan işaretçiyi başa alır

    // karakter dizisinin tanımlanması ve tek tek dizi içine karakterlerin alınması
    char karakterler[sayac];
    sayac=0;
    while (!feof(dfptr))
    {
        karakterler[sayac]=fgetc(dfptr);
        sayac++;
    }

    // kodlar.txt dosyasındaki sayısal değerler bitene kadar okur ve sırasıyla her değer için karakterler dizisindeki o karakteri orijinal.txt dosyasına yazar
    while(!feof(kfptr))
    {
        fscanf(kfptr,"%d ",&kod);
        if(kod > 0 && kod <= sayac) {  // metnin boyutu ile kodun karşılaştırılıp gerekli aralık kontrolünün yapılması
            fprintf(ofptr,"%c",karakterler[kod-1]);
        } else {
            printf("%d indisi bulunmadigi icin atlandi\n", kod);
        }
    }
    fprintf(ofptr, "\n\n");

    // dosya kapam işlemleri
    fclose(kfptr);
    fclose(dfptr);
    fclose(ofptr);
    return 0;
}
