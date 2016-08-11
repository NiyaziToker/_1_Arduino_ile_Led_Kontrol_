#define led1 0
#define led2 1
#define led3 2 
#define led4 3 
#define led5 4
#define led6 5 
#define led7 6 
#define led8 7
#define led9 8 
#define led10 9
#define ldr A0


int veri;
void setup() {
pinMode(ldr,INPUT);  //ldr den veri okuyacağımız için ınput olarak tanımladık
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);
Serial.begin(9600);  // Seri haberleşmeyi başlattık
}

void loop() {
veri=analogRead(ldr);
Serial.print("Gelen değer: ");  //Serial.print yazdığım için bir sonraki yazılacak veriyi yanına gösterecektir
Serial.println(veri);           //Serial.println yazdığım için bir sonraki yazılacak yazıyı alt satırda gösterecektir
if(veri<5){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8,HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
}
else{
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
}
delay(60000); // ldr nin her dakikada bir ölçüm almasını sağladık
}
