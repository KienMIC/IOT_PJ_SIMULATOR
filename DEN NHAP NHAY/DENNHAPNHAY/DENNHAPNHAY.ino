int mangLed[] = {11,12,13};
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<sizeof(mangLed);i++){
    pinMode(mangLed[i],OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<sizeof(mangLed);i++){
      digitalWrite(mangLed[i],HIGH);
      delay(500);
    }
   for(int i=0;i<sizeof(mangLed);i++){
      digitalWrite(mangLed[i],LOW);
      delay(500);
    }
}
