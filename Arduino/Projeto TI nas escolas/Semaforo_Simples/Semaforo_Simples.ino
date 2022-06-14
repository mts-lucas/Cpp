// definindo pinos

int ledr = 3;
int ledy = 4;
int ledg = 5;
 
void setup() {
  //como cada pino se comportara
  pinMode(ledr, OUTPUT);
  pinMode(ledy, OUTPUT);
  pinMode(ledg, OUTPUT);
}
 
void loop() {
  
  digitalWrite(ledr, LOW);
  digitalWrite(ledy, LOW);
  digitalWrite(ledg, HIGH);
  
  delay(2000);
 
  digitalWrite(ledy, HIGH);
  digitalWrite(ledr, LOW);
  digitalWrite(ledg, LOW);

  delay(1000);  
 
  digitalWrite(ledr, HIGH);
  digitalWrite(ledy, LOW);
  digitalWrite(ledg, LOW);
 
  delay(2000);
}
