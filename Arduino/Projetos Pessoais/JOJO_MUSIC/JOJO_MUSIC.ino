const int Buz = 4;
int But = 3;

void setup() {
  //fa#,fab,pausa,re,mi,    fab,mi,re,do#,,re,mi,   fa#,siM,si,do#,re,mi,re,do#,laM,laM,solM
  // put your setup code here, to run once:
  pinMode(Buz, OUTPUT);
  pinMode(But, INPUT);

}

void loop() {
  
  if ( digitalRead(But) == HIGH){
    
    tone(Buz, 743);
    delay(1000);
    tone(Buz, 743);
    delay(1000);
    noTone(Buz);
    delay(800);
    
  }

}
