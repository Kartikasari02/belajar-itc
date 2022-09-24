int speakerPin =12;
int numTones =10;

int tone[]={261,277,

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
 
  
}

void loop() {
  
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH);//turn on LED1
  delay(50);             //wait for 200mn
  digitalWrite(LED2,HIGH);     //turn on LED1
  delay(50); 
  digitalWrite(LED3,HIGH);//turn on LED1
  delay(50); 
  digitalWrite(LED1,LOW);
  delay(600); 
  digitalWrite(LED2,LOW);
  delay(600); 
  digitalWrite(LED3,LOW);//turn on LED1
  delay(600); 
   digitalWrite(LED1,HIGH);//turn on LED1
  delay(50);             //wait for 200mn
  digitalWrite(LED2,HIGH);     //turn on LED1
  delay(50); 
  digitalWrite(LED3,HIGH);//turn on LED1
  delay(50); 
  digitalWrite(LED1,LOW);
  delay(600); 
  digitalWrite(LED2,LOW);
  delay(600); 
  digitalWrite(LED3,LOW);//turn on LED1
  delay(600); 
  



 
}
