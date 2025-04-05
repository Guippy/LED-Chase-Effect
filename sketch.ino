
int Leds[] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4};
int Del = 500;
int CurrentLed = -1;
int Direction = 1;



void setup() {
for(int x = 0; x <= 9; x++){
  pinMode(Leds[x], OUTPUT);
}
pinMode(A2, INPUT); 
}



void loop() {
Del = analogRead(A2);
CurrentLed += Direction;
digitalWrite(Leds[CurrentLed], HIGH);
delay(Del/2);
digitalWrite(Leds[CurrentLed], LOW);
if(CurrentLed == 0 || CurrentLed == 9){
Direction = (CurrentLed == 9) ? -1:1;
}
}
