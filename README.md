C-Matrix-Memory-Access
(C ile Matris Bellek Yönetimi)

Bu proje, C programlama dilinde iki boyutlu bir matrisin elemanlarına klasik A[i][j] indeksleme yöntemi kullanılmadan, yalnızca bellek adresleri üzerinden nasıl erişildiğini ve bu verilerin nasıl güncellendiğini göstermeyi amaçlamaktadır.

Projenin temel odağı, yüksek seviyeli dil soyutlamalarını bir kenara bırakarak bilgisayarın bellekte verileri satır-öncelikli (row-major) düzende nasıl sakladığını anlamaktır.

---

📌 Projenin Amacı

Bilgisayar belleği (RAM), doğrusal (linear) bir yapıdadır.
Bu projede, iki boyutlu bir veri yapısının bellekteki fiziksel yerleşimi:

 * Matrisin başlangıç adresi (base address)

 * Satır ve sütun sayısı

 * Eleman boyutu (byte cinsinden)

 * (i, j) indisleri

kullanılarak pointer aritmetiği ile hesaplanmıştır.

---

🧮 Adres Hesaplama (Row-Major Order)

Row-major bellek düzeninde bir matrisin [i][j] elemanının adresi şu şekilde hesaplanır:

Adres = Base Address + ((i × Sütun Sayısı) + j) × Eleman Boyutu

Açıklamalar:

* Base Address: Matrisin bellekteki ilk elemanı [0][0]

* i: Satır indeksi

* j: Sütun indeksi

* Sütun Sayısı: Bir satırda bulunan toplam eleman sayısı

* Eleman Boyutu: Veri tipinin byte cinsinden büyüklüğü (int için genellikle 4 byte)

---

🚀 Öne Çıkan Özellikler

 * Klasik İndeksleme Yok:
  Hedef elemana erişimde A[i][j] kullanılmamıştır.

 * Pointer Aritmetiği:
  Adres hesaplamaları unsigned char* üzerinden byte seviyesinde yapılmıştır.

 * Dinamik Kullanıcı Girişi:
  Kullanıcı çalışma anında (runtime) erişilecek i ve j değerlerini belirleyebilir.

 * Doğrudan Bellek Erişimi:
  Hesaplanan adres üzerinden veri okunur ve güncellenir.

 * Hata Yönetimi:
  Geçersiz indis girişlerine karşı sınır kontrolü yapılmıştır.

 * Görselleştirme:
  Güncelleme öncesi ve sonrası matris konsolda gösterilir.

---

🛠️ Kurulum ve Çalıştırma

1. odev.c dosyasını bir C derleyicisi (GCC, Visual Studio vb.) ile açın.

2. Programı derleyip çalıştırın.

3. Konsolda:

  * Mevcut matrisi,

  * Seçilen elemanın hesaplanan bellek adresini,

  * O adresteki değeri,

  * Güncelleme sonrası matrisin yeni halini görebilirsiniz.

---
    
📋 Örnek Konsol Çıktısı

<img width="%100" alt="image" src="https://github.com/user-attachments/assets/5a5eab1f-0eb5-49bf-a242-f44dacc6d003" />



---

Developed by Firdevs Kara | Computer Engineering Student 💻
