int role=7;    // Input pinini tanımladık
String readString; 
void setup()
{
  Serial.begin(9600);     // seri haberleşmeyi başlattık
  pinMode(role,OUTPUT);    
}

void loop() {
while(Serial.available())     
{                                       
  delay(5);                     
  char c= Serial.read();         // telefondan gelen veriyi arduinoda okuttuk
  readString+=c;
}
if(readString.length()>0)    
{
  Serial.println(readString);  
  if(readString=="ampul yak")      // eğer okuttuğumuz veri ampul yak ise
  {
    digitalWrite(role,LOW);        // röleye 0V verdik ve ampul yandı
  }
  if(readString=="ampul kapat")        // eğer okuttuğumuz veri ampul kapat ise
  {
    digitalWrite(role,HIGH);              // röleye 5V verdik ve ampul kapandı
  }
  readString="";           
}
}
