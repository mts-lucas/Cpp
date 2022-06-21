int LEDR = 2;
int LEDG = 3;
int LEDY = 4;
int BUT1 = 5;
int BUT2 = 6;
int BUT3 = 7;

void setup() {
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDY, OUTPUT);
  pinMode(BUT1, INPUT);
  pinMode(BUT2, INPUT);
  pinMode(BUT3, INPUT);

}

void loop() {
  
  if (digitalRead(BUT1) == HIGH){
    
    digitalWrite(LEDR, HIGH);
     
  }
  else {
    
    digitalWrite(LEDR, LOW);
  }
      
  if (digitalRead(BUT2) == HIGH){
    
    digitalWrite(LEDG, HIGH);
    
  }
  else {

    digitalWrite(LEDG, LOW);
    
  }
  if (digitalRead(BUT3) == HIGH){
    
    digitalWrite(LEDY, HIGH);
    
  }
  else {

    digitalWrite(LEDY, LOW);
    
  }
 
}
