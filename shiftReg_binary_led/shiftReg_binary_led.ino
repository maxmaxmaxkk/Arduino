#define DATA 6
#define LATCH 8
#define CLOCK 10

void setup() {
  // put your setup code here, to run once:
  pinMode(DATA,OUTPUT);
  pinMode(LATCH,OUTPUT);
  pinMode(CLOCK,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 256; i++){
      digitalWrite(LATCH, LOW);
      shiftOut(DATA, CLOCK, MSBFIRST, i);
      digitalWrite(LATCH, HIGH);
      delay(200);    
  }
}
