const int Buz = 4;
int But = 3;

void setup() {
  //fa,fa,pausa,fa,mi,mi,re,do,re,re,mi,fa,si,do,re,mi,mi,re,do,la,la,sol
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
