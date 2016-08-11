int led=2; 
String readString; 
void setup()
{
  Serial.begin(9600);    // seri haberleşmeyi başlattık
  pinMode(led,OUTPUT);    
}

void loop() {
while(Serial.available())     // bağlı iken alttaki komutları işler bağlı değilse işlemez
{                                       
  delay(5);                     
  char c= Serial.read();        // burda telefondan gönderdiğimiz veriyi okuyoruz
  readString+=c;   
}
if(readString.length()>0)    //eğer veri varsa yani led yak varsa bunun uzunluğu vardır bunu 
{                                          //readString.length() komutu ile buluruz eğer veri varsa demek oluyor
  Serial.println(readString);  
  if(readString=="led yak")      //Telefondan gönderdiğim veri led yak ise ledi açıyoruz
  {
    digitalWrite(led,HIGH);      
  }
  if(readString=="led kapat")      //led kapat ise ledi kapatıyoruz
  {
    digitalWrite(led,LOW);        
  }
  readString="";           // Bu işlemler bittikten sonra stringi boşaltıyoruz eğer veri gelmezse length 0 
}                                    // olduğu için eski komutları yapmaya devam ediyor
}
