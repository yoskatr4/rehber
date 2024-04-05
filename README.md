# Kod Açıklaması:
## Kütüphane ve Global Değişkenler:
    
        #include <stdio.h>: Standart giriş/çıkış işlemleri için gerekli olan kütüphaneyi ekler.
        char isim[50];: Rehberdeki kişinin adını saklamak için bir dizi oluşturur. Her bir ad en fazla 49 karakter uzunluğunda olabilir.
        char numara[100];: Rehberdeki kişinin numarasını saklamak için bir dizi oluşturur. Her bir numara en fazla 99 karakter uzunluğunda olabilir.
        char ara[50];: Arama işlemi için kullanılacak olan geçici dizi.

## Fonksiyonlar:
        void adresEkle(): Yeni bir kişiyi rehbere eklemek için kullanılan fonksiyon. Kullanıcıdan isim ve numara bilgisi alır ve rehbere kaydeder.
        int main(): Programın ana fonksiyonu. Kullanıcıya menüyü gösterir ve seçimine göre ilgili işlemi gerçekleştirir.

### adresEkle() Fonksiyonu:    
        Kullanıcıdan isim ve numara bilgisi alır.
        Girilen bilgileri kullanarak bir mesaj yazdırır.
        Ana menüye geri dönmek için main() fonksiyonunu çağırır.

###  main() Fonksiyonu:
        Kullanıcıya menüyü gösterir ve seçim yapmasını sağlar.
        Kullanıcının seçimine göre ilgili işlemi gerçekleştirir:
            1: Kayıt işlemi için adresEkle() fonksiyonunu çağırır.
            2: Arama işlemi için gerekli talimatları verir.
            99: Çıkış işlemi için programı sonlandırır.

Kısıtlamalar ve Geliştirmeler:

Program basit bir simülasyon olduğu için gerçek bir telefon rehberi uygulaması olarak kullanılamaz.
    Daha gelişmiş bir telefon rehberi uygulaması için çeşitli geliştirmeler yapılabilir. Örneğin, kişi bilgilerini daha kapsamlı saklamak, dosya işlemleri kullanarak veriyi kalıcı olarak saklamak ve hata yönetimi eklemek gibi.
