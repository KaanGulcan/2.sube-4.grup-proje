# Askeri Şifreleme (2. Şube - 4. Grup Dönem Sonu Projesi)

### Projenin Konusu
Projemizin konusu istenilen şifrelemeye göre verilen metin içerisindeki ilgili karakterlerin alınarak orijinal.txt adında yeni bir dosya içerisine yazılmasıdır. Şifreleme için gerekli girdiler sırası ile d.txt adında bir ilk metin ve kodlar.txt adında kodları içeren ikinci bir metin dosyasıdır. Proje tanımının tam hâli aşağıdaki görseldedir:

<img width="1037" height="168" alt="resim" src="https://github.com/user-attachments/assets/853c5f9c-76d6-4b7e-9108-989a5b7435db" />


### Görev dağılımı
- **Aliberk Sandıkçı** - Proje koordinasyonu
- **Kaan Gülcan** - Genel kod yapısının C dilinde koda dökülmesi
- **Mehmet Çelik** - Akış diyagramının oluşturulması  
- Hepimiz - Kodun test edilmesi ve sunum


Projemizin işleyişini görselleştiren sözde kod ve akış diyagramı aşağıda verilmiştir. 

### Sözde Kod

```md
1. BAŞLA
2. kodlar.txt, d.txt ve orijinal.txt dosyasını aç
3. dosyaların varlığını kontrol et
4. sayac = 0 ata
5. d.txt'den bir karakter oku
  5.1. sayac'ı 1 arttır.
  5.2. Eğer d.txt dosyasının sonuna gelmediysen 5. adıma git, geldiysen 6. adımdan devam et
6. karakterler[sayac] seklinde bir dizi olustur
7. okuyucuyu satır başına getir
8. sayac = 0 ata
9. d.txt'den bir karakter oku
  9.1. okunan karakteri, karakterler[sayac]'e ata
  9.2. sayac'ı 1 arttır.
  9.3. Eğer d.txt dosyasının sonuna gelmediysen 9. adıma git, geldiysen 10. adımdan devam et
10. kodlar.txt'den bir sayı oku ve kod değişkenine ata
  10.1. "kod > 0 && kod <= sayac" ise 10.1.1. değilse 10.1.2. adımından devam et
    10.1.1. orijinal.txt dosyasına karakterler[kod-1] yaz
    10.1.2. indisin istenen aralıkta olmadığı ile ilgili terminale uyarı yaz
  10.2 kodlar.txt dosyasının sonuna gelmediysen 10. adıma atla. Geldiysen 11. adımdan devam et
11. Açılan dosyaları kapat
12. BİTİR
```


```mermaid
graph TD
    A([BAŞLA]) --> B[/kodlar.txt, d.txt, orijinal.txt aç/]
    B --> C{Dosyalar var mı?}
    
    C -- Hayır --> Z([BİTİR])
    C -- Evet --> D[sayac = 0]
    
    D --> E[/d.txt'den karakter oku/]
    E --> F[sayac'ı 1 arttır]
    F --> G{Dosya sonu mu?}
    G -- Hayır --> E
    
    G -- Evet --> H["karakterler[sayac] dizisini oluştur"]
    H --> I[Okuyucuyu başa getir ve sayac = 0]
    
    I --> J[/d.txt'den karakter oku/]
    J --> K["karakterler[sayac] = okunan karakter"]
    K --> L[sayac'ı 1 arttır]
    L --> M{Dosya sonu mu?}
    M -- Hayır --> J
    
    M -- Evet --> N[/kodlar.txt'den kod oku/]
    N --> O{"kod > 0 && kod <= sayac?"}
    
    O -- Evet --> P["orijinal.txt'ye karakterler[kod-1] yaz"]
    O -- Hayır --> Q[/Terminale uyarı yaz/]
    
    P --> R{kodlar.txt sonu mu?}
    Q --> R
    R -- Hayır --> N
    
    R -- Evet --> S[Dosyaları kapat]
    S --> T([BİTİR])
```

### Örnek Ekran Çıktıları
Projemizin çalışma zamanındaki örnek girdileri ve ekran çıktıları görsel olarak verilmiştir.

<img width="866" height="59" alt="resim" src="https://github.com/user-attachments/assets/4ef0558c-4d28-44ec-b3cf-b29187b905ac" /><br>
<img width="315" height="51" alt="resim" src="https://github.com/user-attachments/assets/71b8495d-d58f-47a3-9f59-76aac613ebaa" /><br>
<img width="43" height="59" alt="resim" src="https://github.com/user-attachments/assets/7ce7d089-c1d7-42b7-b8e9-040b6e5b3fae" /><br>
<img width="169" height="48" alt="resim" src="https://github.com/user-attachments/assets/189e4337-b536-451f-9338-9d4ddb472553" /><br>

### C Program Kodları
Kodlara [main.c](https://github.com/KaanGulcan/2.sube-4.grup-proje/blob/main/main.c) dosyasından ulaşabilirsiniz

### GitHub
<img width="340" height="340" alt="https___github com_KaanGulcan_2 sube-4 grup-proje_blob_main_README md" src="https://github.com/user-attachments/assets/57a75d46-6a4c-4b93-99a1-f1f12b14fead" />
