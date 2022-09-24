int button= 2;
int nilaitombol;
int count;

int led= 13;
int led2= 12;

void setup(){
pinMode(button, INPUT);
pinMode(led, OUTPUT);
}

void loop(){
nilaitombol= digitalRead(button);

if(nilaitombol == 1){
count++;
delay(300);
if(count==1){
digitalWrite(led, HIGH);
digitalWrite(led2, LOW);
}
if(count==2){
digitalWrite(led, LOW);
digitalWrite(led2, HIGH);
count=0;
}
}
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
