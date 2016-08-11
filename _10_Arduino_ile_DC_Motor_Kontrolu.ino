const int ileri = 13;
const int geri = 12;
const int enable = 5;
const int voltage = 8;

void setup(){
pinMode(ileri,OUTPUT); //pinleri çıkış olarak tanımladık
pinMode(geri,OUTPUT);
pinMode(enable,OUTPUT);
pinMode(voltage,OUTPUT);
digitalWrite(voltage,HIGH); // Motor sürücünün 16. pinine 5V gönderdik
                            // direk 5V pinine de bağlayabilirsiniz.
}
void loop(){

digitalWrite(ileri,HIGH); // Böylece ileri olarak tanımladık
digitalWrite(geri,LOW);
for(int i=0; i<255; i++)  { // hızlanarak ileri gitti
analogWrite(enable,i); }     // pwm değeri gönderdiği için analogwrite komutu kullandık

digitalWrite(ileri,LOW); // geri olarak tanımladık
digitalWrite(geri,HIGH);
for(int j=255; j>0; j--){ // yavaslayarak geri geldi
analogWrite(enable,j);

}
}
