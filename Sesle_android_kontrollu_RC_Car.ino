// sesle kontrol edilebilen rc araba
// niyazitoker.blogspot.com.tr

int hiz = 160 ;
int solileri = 12; // motor sürücüden gelen sol motorun girişleri
int solgeri = 13;
int solenable = 11; // sol enable pini pwm pini olmalı
int sagileri = 8;  //motor sürücüden gelen sağ motorun girişleri
int saggeri = 9;
int sagenable = 10 ;  // sağ enable pini pwm pini olmalı
String readString;

void ileri(int hiz) {


  digitalWrite(solileri, HIGH);
  digitalWrite(solgeri, LOW);  
  digitalWrite(sagileri, HIGH);
  digitalWrite(saggeri, LOW); 
  analogWrite(solenable, hiz);
  analogWrite(sagenable, hiz);
}

void geri(int hiz) {

  digitalWrite(solileri, LOW);
  digitalWrite(solgeri, HIGH);  
  digitalWrite(sagileri, LOW);
  digitalWrite(saggeri, HIGH); 
  analogWrite(solenable, hiz);
  analogWrite(sagenable, hiz);
}
void dur(int hiz) {
  digitalWrite(solileri, HIGH);
  digitalWrite(solgeri, HIGH);
  digitalWrite(sagileri, HIGH);
  digitalWrite(saggeri, HIGH);
  analogWrite(sagenable, 0);
  analogWrite(solenable, 0);
}
void sol(int hiz) {
  digitalWrite(solileri, HIGH);
  digitalWrite(solgeri, HIGH);
  digitalWrite(sagileri, HIGH);
  digitalWrite(saggeri, LOW);
  analogWrite(sagenable, hiz);
  analogWrite(solenable, 0);
}
void sag(int hiz) {
  digitalWrite(solileri, HIGH);
  digitalWrite(solgeri, LOW);
  digitalWrite(sagileri, HIGH);
  digitalWrite(saggeri, HIGH);
  analogWrite(sagenable, 0);
  analogWrite(solenable, hiz);
}
void setup(){
  Serial.begin(9600);
  pinMode(solileri, OUTPUT);
  pinMode(solgeri, OUTPUT);
  pinMode(solenable, OUTPUT);
  pinMode(sagileri, OUTPUT);
  pinMode(saggeri, OUTPUT);
  pinMode(sagenable, OUTPUT);
}

void loop() {
  while(Serial.available())     // bağlı iken alttaki komutları işler bağlı değilse işlemez
  {                                       
    delay(5);                     
    char c= Serial.read();        // burda telefondan gönderdiğimiz veriyi okuyoruz
    readString+=c;   
  }
  if(readString.length()>0)    //eğer veri  varsa bunun uzunluğu vardır bunu 
  {                                          //readString.length() komutu ile buluruz eğer veri varsa demek oluyor
    Serial.println(readString);  
    if(readString=="İleri")     
    {
      ileri(hiz);     
    }
    if(readString=="geri")      
    {
      geri(hiz);        
    }
    if(readString=="sola" || readString=="sos"|| readString=="sol"||readString=="Solak") //sesi bazen düzgün algılayamadığı için ne algıladığına bakıp o durumları da eklemeye çalıştım
    {
      sol(hiz);                                                                         
    }
    if(readString=="sağa"|| readString=="sabah"|| readString=="sağ") //sesi bazen düzgün algılayamadığı için ne algıladığına bakıp o durumları da eklemeye çalıştım
    {
      sag(hiz);
    }
    if(readString=="dur")     
    {
      dur(hiz);
    }
    readString="";           // Bu işlemler bittikten sonra stringi boşaltıyoruz eğer veri gelmezse length 0 
  }                                    // olduğu için eski komutları yapmaya devam ediyor
}
