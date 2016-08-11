
#define led 13                                          //3-led i arduinomuzun 13. bacağına  bağladığımızı belirtiyoruz ayrıca bu sayıyı led adında bir değişkene atıyoruz
//int led=13;                                                 define kullanmak yerine bağlayacağımız bacağı bir integer(tam sayı) olduğu için bunu bir led değişkenine atıp da belirtebiliriz
void setup() {                                          // 2-void loop kısmında kullanılacak şeyleri bu kısımda tanımlanır
                                                        //4- bağladığımız ledden veri mi alacağız veri mi göndereceğimizi böylelikle belirmiş oluruz
  pinMode(led,OUTPUT);                                  // eğer bir veri okuyacaksak bu kısmı pinMode(led,INPUT); yapmamız gerekir


}

void loop() {                                           //  1- programımızın yapması gerekenleri yazarken kullanırız loop döngü anlamına gelir ve arduino sürekli bu kısmı işler
  digitalWrite(led,HIGH);                               // 5 ve devamı hıgh yazdığımız için arduinodan 5v verdik ve led yandı
  delay(500);                                           // 500 mili saniye led yanarak bekledi çünkü delay yazarsak delayden önceki komutu yapmaya devam eder
  digitalWrite(led,LOW);                                //500 mili saniye sonunda arduinodan 0v gitti ve led söndü
  delay(500);                                           //500 mili saniye led sönerek bekledi ve void loopun başına giderek bu işleme devam etti
}
