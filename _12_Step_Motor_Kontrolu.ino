#include <Stepper.h> // Stepper kütüphanesini ekledik
int in1Pin = 12;          // Motor sürücüden gelen pinleri tanımladık
int in2Pin = 11;
int in3Pin = 10;
int in4Pin = 9;
Stepper motor(48, in1Pin, in2Pin, in3Pin, in4Pin);  //kaç derece döneceğini ve hangi pinlerin kullanılacağını gösterdik
void setup()
{
  Serial.begin(9600);    // Serial portdan veri gireceğimiz için seri haberleşmeyi başlattık
  
  pinMode(in1Pin, OUTPUT);   //Pinleri output olarak tanımladık
  pinMode(in2Pin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in4Pin, OUTPUT);
  
  motor.setSpeed(20);                // Motorların hızını 20 rpm ayarladık
}
void loop()
{
  if (Serial.available())      // Seri haberleşme uygunken
  {
    int steps = Serial.parseInt();   // Serial ekrandan veri istedik ve girilen veriyi parseInt komutuyla integer (tamsayı) ya çevirdik
    motor.step(steps);                  // girilen sayı kadar step motorumuz döndü
  }
}
