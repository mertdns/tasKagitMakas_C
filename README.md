# Taş Kağıt Makas Oyunu

Basit bir C programı ile oluşturulan, kullanıcı versus bilgisayar taş kağıt makas oyunu.
bence c dilini az çok anlamak için yeterli bir örnek oldu.

## 📋 Proje Açıklaması

Bu proje, klasik "Taş Kağıt Makas" oyununu C dilinde uygulamış bir oyundur. Oyuncu bilgisayara karşı 3 tur boyunca oynar ve toplam puanı yüksek olan kazanır.

## 🎮 Oyun Kuralları

- **Oyun 3 turdan oluşur**
- Her turda oyuncu 1, 2 veya 3 rakamını girer:
  - `1` = Taş
  - `2` = Kağıt
  - `3` = Makas
- Bilgisayar rastgele seçim yapar
- Kazanma kuralları:
  - Taş, Makası yener
  - Kağıt, Taşı yener
  - Makas, Kağıdı yener
- Tur sonu en yüksek puana sahip olan oyunu kazanır

## 🚀 Derleme ve Çalıştırma

### Windows (CMD/PowerShell)
```bash
gcc taskagitmakas.c -o taskagitmakas.exe
taskagitmakas.exe
```

### Linux/Mac
```bash
gcc taskagitmakas.c -o taskagitmakas
./taskagitmakas
```

## 📝 Oyun Örneği

```
Hosgeldin, hadi baslayalim round: 1
1-tas
2-kagit
3-makas
sec: 1
tas sectin
bot secimi: kagit
maalesef, bot bir puan kazandi
1.round sona erdi
...
```

## 💾 Dosya Yapısı

```
taskagitmakas_c/
├── taskagitmakas.c    # Ana program dosyası
└── README.md          # Bu dosya
```

## 🛠️ Teknik Detaylar

- **Dil:** C
- **Gereken Kütüphaneler:** 
  - `stdio.h` - Giriş/çıkış işlemleri
  - `stdlib.h` - Rastgele sayı üretimi
  - `time.h` - Zaman fonksiyonları
- **Rastgele Seçim:** Bilgisayarın seçimi `rand()` fonksiyonu ile oluşturulur

## 👥 Yazar

Oluşturulan tarih: 2026

## 📄 Lisans

Bu proje açık kaynak projesidir.
