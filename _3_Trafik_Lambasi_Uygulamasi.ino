#define A 9   // tabloya göre a segmentin 7. bacagına bağlı
#define B 8   // hepsini aynı mantıkla bağlıyoruz
#define C 2
#define D 3
#define E 4
#define f 10
#define G 11
const int kirmizi=7;  // const int kırmızı değişkenimiz hep 7 kalsın demektir
const int sari=6;      //program çalışırken değişken değişse bile 7 ile işlem yapar
const int yesil=5;

void sayi0(){
  digitalWrite(A, HIGH);  //burda fonksiyonlara değineyim
  digitalWrite(B, HIGH);  //fonksiyonlar programı parçalamamızı sağlar
  digitalWrite(C, HIGH);  //yazılışı yandaki gibidir.
  digitalWrite(D, HIGH);  //fonksiyonun işlemesi için kullanacağımıaz
  digitalWrite(E, HIGH);  //kısımda fonksiyonadı; şeklinde çağırmamız gerek
  digitalWrite(f, HIGH);  //sayı0; şeklinde yazarsak o an sayı0 a gelir işler ve devam eder
  digitalWrite(G, LOW);
  delay(1000);
};

void sayi1(){
digitalWrite(A,LOW);    // 1 için sadece b ve c nin yanması gerek
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(f, LOW);
digitalWrite(G, LOW);
delay(1000);
};

void sayi2(){
digitalWrite(A,HIGH); // 2 için c ve f sönük olması yeterli
digitalWrite(B, HIGH);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(f, LOW);
digitalWrite(G, HIGH);
delay(1000);
};

void sayi3(){
digitalWrite(A,HIGH);
digitalWrite(B, HIGH);  // 3 için
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(f, LOW);
digitalWrite(G, HIGH);
delay(1000);
};

void sayi4(){
digitalWrite(A,LOW);    //4
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);
};

void sayi5(){
digitalWrite(A,HIGH);    //5
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);
};

void sayi6(){
digitalWrite(A,HIGH);    //6
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);
};

void sayi7(){
digitalWrite(A,HIGH);    //7
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(f, LOW);
digitalWrite(G, LOW);
delay(1000);
};

void sayi8(){
digitalWrite(A, HIGH);    //8
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);
};

void sayi9(){
digitalWrite(A, HIGH);    //9
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);
};

void kiryak(){   // kırmızı ışığın yanması
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,LOW);
digitalWrite(yesil,LOW);
sayi9();
sayi8();
sayi7();
sayi6();
sayi5();
sayi4();
sayi3();
sayi2();
sayi1();
sayi0();
};

void saryak(){   // sarı ışığın yanması
  digitalWrite(kirmizi,LOW);
  digitalWrite(sari,HIGH);
  digitalWrite(yesil,LOW);
sayi3();
sayi2();
sayi1();
sayi0();
};

void yesyak(){    //yeşil ışığın yanması
  digitalWrite(kirmizi,LOW);
  digitalWrite(sari,LOW);
  digitalWrite(yesil,HIGH);
sayi6();
sayi5();
sayi4();
sayi3();
sayi2();
sayi1();
sayi0();
};
   
  void setup()
{
  pinMode(A, OUTPUT);  // tüm kısımları tanımladık bu kısımda
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(G, OUTPUT);
  
  pinMode(kirmizi,OUTPUT);
  pinMode(sari,OUTPUT);
  pinMode(yesil,OUTPUT);

}

void loop()
{
 kiryak();
 saryak();
 yesyak();
}
