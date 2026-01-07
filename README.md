🌍 Fizik Deneyleri Simülasyonu (C Dili)

Bu proje, C dili kullanılarak hazırlanmış basit bir fizik deneyleri simülasyonudur.
Amaç, farklı gezegenlerde yerçekimi ivmesine bağlı olarak bazı temel fizik deneylerinin sonuçlarını hesaplamak ve kullanıcıya göstermek.

Program menü tabanlıdır ve kullanıcı seçtiği deneye göre gerekli bilgileri girerek sonuçları görebilir.

🚀 Projenin Amacı

C dilinde fonksiyon, pointer, dizi ve menü yapısı kullanımını pekiştirmek

Fizikteki bazı temel konuları kodla ifade etmek

Aynı hesaplamayı farklı gezegenler için yaparak farkları görmek

🧪 Yapılabilen Deneyler

Programda aşağıdaki deneyler bulunmaktadır:

Serbest Düşme Deneyi

Yukarı Atış Deneyi

Ağırlık Deneyi

Kütleçekimsel Potansiyel Enerji Deneyi

Hidrostatik Basınç Deneyi

Arşimet Kaldırma Kuvveti Deneyi

Basit Sarkaç Periyodu Deneyi

Sabit İp Gerilmesi Deneyi

Asansör Deneyi

Her deney, 8 farklı gezegen için ayrı ayrı hesaplanır.

🌌 Kullanılan Gezegenler ve Yerçekimi Değerleri
Gezegen	g (m/s²)
Merkür	3.7
Venüs	8.9
Dünya	9.8
Mars	3.7
Jüpiter	24.7
Satürn	10.4
Uranüs	8.7
Neptün	11.2

Bu değerler program içinde dizi olarak tutulur ve pointer ile fonksiyonlara aktarılır.

🛠️ Programın Çalışma Mantığı

Program başta kullanıcıdan isim alır

Menü ekrana yazdırılır

Kullanıcı deney numarasını seçer

Seçilen deney için gerekli değerler kullanıcıdan alınır

Hesaplamalar tüm gezegenler için yapılır

Sonuçlar ekrana yazdırılır

Kullanıcı -1 girene kadar program çalışmaya devam eder

📌 Kullanılan Yapılar

double ve char dizileri

Pointer ile diziye erişim (*(gPtr + i))

Fonksiyonlar ile modüler yapı

switch-case menü sistemi

Basit girdi doğrulama (negatif değerleri pozitife çevirme)

⚠️ Bilinen Eksikler

Girdi doğrulama daha gelişmiş yapılabilir (harf girilmesi vs.)

Sonuçlar dosyaya yazdırılabilir

Menü tasarımı daha düzenli hale getirilebilir

Yerçekimi değerleri kullanıcı tarafından eklenebilir

▶️ Derleme ve Çalıştırma
gcc main.c -o fizik -lm
./fizik


-lm math kütüphanesi için gereklidir.
