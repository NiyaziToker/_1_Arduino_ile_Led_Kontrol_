#define A 9   // tabloya göre a segmentin 7. bacagına bağlı
#define B 8   // hepsini aynı mantıkla bağlıyoruz
#define C 2
#define D 3
#define E 4
#define f 10
#define G 11

void setup()
{
  pinMode(A, OUTPUT);  // tüm kısımları tanımladık bu kısımda
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(G, OUTPUT);

}

void loop()
{
  digitalWrite(A, HIGH);  //burda tüm kısımları birer led gibi düşünün
  digitalWrite(B, HIGH);  //0 görünümü olması için g kısmının yanamaması gerekir
  digitalWrite(C, HIGH);  //diğerlerinş yakarken g sönük kalması 0 ı verir bize
  digitalWrite(D, HIGH);  //tüm sayıları aynı mantıkla kendinizde bulabilirsiniz
  digitalWrite(E, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(G, LOW);
  delay(1000);



digitalWrite(A,LOW);    // 1 için sadece b ve c nin yanması gerek
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(f, LOW);
digitalWrite(G, LOW);
delay(1000);



digitalWrite(A,HIGH); // 2 için c ve f sönük olması yeterli
digitalWrite(B, HIGH);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(f, LOW);
digitalWrite(G, HIGH);
delay(1000);



digitalWrite(A,HIGH);
digitalWrite(B, HIGH);  // 3 için
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(f, LOW);
digitalWrite(G, HIGH);
delay(1000);



digitalWrite(A,LOW);    //4
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);



digitalWrite(A,HIGH);    //5
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);



digitalWrite(A,HIGH);    //6
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);



digitalWrite(A,HIGH);    //7
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(f, LOW);
digitalWrite(G, LOW);
delay(1000);



digitalWrite(A, HIGH);    //8
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);

digitalWrite(A, HIGH);    //9
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
delay(1000);
}
