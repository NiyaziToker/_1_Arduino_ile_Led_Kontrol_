#include <LiquidCrystal.h> // kütüphaneyi ekledik üstteki işlemi yapınca otamatik eklenecektir

// kütüphanenin kullanacağı pinleri belirtiyoruz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // lcd miz 2x16 lık olduğu için önce kolon sonra satır sayısını giriyoruz
  lcd.begin(16, 2);
  // lcd ye yazacağımız yazıyı bu komutta yazıyoruz
  lcd.print("Merhaba Dunya!");
}

void loop() {
  // üstte yazdığımız 0. satıra bir alt satıra yazmamız için bunu 1. satır olarak belirttik
  lcd.setCursor(0, 1);   // 0 ise ilk sutundan itibaren yazmamız gerektiğini belirttik
  lcd.print("Adim Niyazi"); // buraya kendi isminizi yazın
}
