int PinLED2 = 2; //Define o LED2 como pino 2
int PinLED3 = 3; //Define o LED3 como pino 3
int PinLED4 = 4; //Define o LED4 como pino 4
int PinLED5 = 5; //Define o LED5 como pino 5
int PinLED6 = 6; //Define o LED6 como pino 6
int PinLED7 = 7; //Define o LED7 como pino 7
int PinLED8 = 8; //Define o LED8 como pino 8
int x; //cria a variavel x


void setup() {
  
  pinMode(PinLED2, OUTPUT); //DEFINE COMO SAIDA
  pinMode(PinLED3, OUTPUT); //DEFINE COMO SAIDA 
  pinMode(PinLED4, OUTPUT); //DEFINE COMO SAIDA 
  pinMode(PinLED5, OUTPUT); //DEFINE COMO SAIDA 
  pinMode(PinLED6, OUTPUT); //DEFINE COMO SAIDA 
  pinMode(PinLED7, OUTPUT); //DEFINE COMO SAIDA 
  pinMode(PinLED8, OUTPUT); //DEFINE COMO SAIDA

}

void loop() {
  
  x = random(1, 7); //atribuindo um valor a variavel com uma função que randomiza um valor entre min(1) e max-1(6)
  
  if (x == 1){
    
    digitalWrite(PinLED2, LOW); //DESLIGA LED2
    digitalWrite(PinLED3, LOW); //DESLIGA LED3
    digitalWrite(PinLED4, LOW); //DESLIGA LED4
    digitalWrite(PinLED5, HIGH); //LIGA LED5
    digitalWrite(PinLED6, LOW); //DESLIGA LED6
    digitalWrite(PinLED7, LOW); //DESLIGA LED7
    digitalWrite(PinLED8, LOW); //DESLIGA LED8
    delay(3000); //AGUARDA 3 SEGUNDOS
  }
  else if (x == 2){
    
    digitalWrite(PinLED2, LOW); //DESLIGA LED2
    digitalWrite(PinLED3, LOW); //DESLIGA LED3
    digitalWrite(PinLED4, HIGH); //LIGA LED4
    digitalWrite(PinLED5, LOW); //DESLIGA LED5
    digitalWrite(PinLED6, LOW); //DESLIGA LED6
    digitalWrite(PinLED7, LOW); //DESLIGA LED7
    digitalWrite(PinLED8, HIGH); //LIGA LED8
    delay(3000); //AGUARDA 3 SEGUNDOS
    
  }
  else if (x == 3){
    
    digitalWrite(PinLED2, LOW); //DESLIGA LED2
    digitalWrite(PinLED3, LOW); //DESLIGA LED3
    digitalWrite(PinLED4, HIGH); //LIGA LED4
    digitalWrite(PinLED5, HIGH); //LIGA LED5
    digitalWrite(PinLED6, LOW); //DESLIGA LED6
    digitalWrite(PinLED7, LOW); //DESLIGA LED7
    digitalWrite(PinLED8, HIGH); //LIGA LED8
    delay(3000); //AGUARDA 3 SEGUNDOS
  }
  else if (x == 4){
    
    digitalWrite(PinLED2, HIGH); //LIGA LED2
    digitalWrite(PinLED3, LOW); //DESLIGA LED3
    digitalWrite(PinLED4, HIGH); //LIGA LED4
    digitalWrite(PinLED5, HIGH); //LIGA LED5
    digitalWrite(PinLED6, LOW); //DESLIGA LED6
    digitalWrite(PinLED7, LOW); //DESLIGA LED7
    digitalWrite(PinLED8, HIGH); //LIGA LED8
    delay(3000); //AGUARDA 3 SEGUNDOS
  }
  else if (x == 5){
    
    digitalWrite(PinLED2, HIGH); //LIGA LED2
    digitalWrite(PinLED3, LOW); //DESLIGA LED3
    digitalWrite(PinLED4, HIGH); //LIGA LED4
    digitalWrite(PinLED5, HIGH); //LIGA LED5
    digitalWrite(PinLED6, HIGH); //LIGA LED6
    digitalWrite(PinLED7, LOW); //DESLIGA LED7
    digitalWrite(PinLED8, HIGH); //LIGA LED8
    delay(3000); //AGUARDA 3 SEGUNDOS 
  }
  else if (x == 6){

    digitalWrite(PinLED2, HIGH); //LIGA LED2
    digitalWrite(PinLED3, HIGH); //LIGA LED3
    digitalWrite(PinLED4, HIGH); //LIGA LED4
    digitalWrite(PinLED5, LOW); //DESLIGA LED5
    digitalWrite(PinLED6, HIGH); //LIGA LED6
    digitalWrite(PinLED7, HIGH); //LIGA LED7
    digitalWrite(PinLED8, HIGH); //LIGA LED8
    delay(3000); //AGUARDA 3 SEGUNDOS 
  }
  
  //DESLIGA TODOS OS LEDS E AGUARDA 3 SEGUNDOS PARA REINICIAR O PROGRAMA
  digitalWrite(PinLED2, LOW); 
  digitalWrite(PinLED3, LOW); 
  digitalWrite(PinLED4, LOW);
  digitalWrite(PinLED5, LOW); 
  digitalWrite(PinLED6, LOW); 
  digitalWrite(PinLED7, LOW); 
  digitalWrite(PinLED8, LOW); 
  delay(3000); 

}
