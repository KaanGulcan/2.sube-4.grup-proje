# 2.sube-4.grup-proje
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
