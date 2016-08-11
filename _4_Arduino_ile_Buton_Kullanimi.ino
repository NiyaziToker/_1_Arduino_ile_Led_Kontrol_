const int butonPin = 2;     // butonu bağladığımız pin
const int ledPin =  13;      // arduino unonun üstündeki ledin pini
                             //daha önce bundan bahsetmiştim
// variables will change:
int butondurum = 0;         // butonun durumunu başlangıçda 0 olarak belirledik

void setup() {
  pinMode(ledPin, OUTPUT);      // ledi ve butonu tanımladık
  pinMode(butonPin, INPUT);     
}

void loop(){
  
  butondurum = digitalRead(butonPin); // hep kullandığımız digitalWrite yerine bu komutu kullandık
                                        //write veri gönderme read veri alma olarak düşünün
  if (butondurum == HIGH) {     // eğer butona bastıysak yani digitalRead hıgh okuduysa ledi yak
    
    digitalWrite(ledPin, HIGH);  
  } 
  else {                        //değilse söndür
    digitalWrite(ledPin, LOW); 
  }
}

