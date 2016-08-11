#include <Servo.h>

Servo benimservom;  // servomuzun adını tanımlıyoruz

void setup()
{
Serial.begin(9600);
  benimservom.attach(11);  // servomuzun 11. pine bağlı olduğunu tanımladık
  benimservom.write(0); // ilk konumunu 0 derece olarak belirledik hangi dereceye gideceğini write komutu ile yazdırırız.
}

void loop() 
{ 

  if(benimservom.attached())
  {
  for(int dondur=0 ; dondur<=180 ; dondur+=10)
  {                            //100 ms aralıkla servoyu 10ar derece arttırarak 180 dereceye ulaşacaktır.
  benimservom.write(dondur);  
  int acioku = benimservom.read();
  Serial.println(acioku);
  delay(100); 
  }
  for(int dondur=180 ; dondur>=0 ; dondur-=10)
  {                            // 100 ms aralıkla 180 dereceden 0 dereceye 10 ar derece düşeşerek ulaşacaktır.
  benimservom.write(dondur); 
  int acioku = benimservom.read();
  Serial.println(acioku);
  delay(100);    
  }                            //ve bu döngüyü sürekli yapacaktır
}
}
