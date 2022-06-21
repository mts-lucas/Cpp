const int pinoSEN = 2;  // PINO DIGITAL UTILIZADO PELO SENSOR DE PRESENÇA
const int pinoLED = 8;  // PINO DIGITAL UTILIZADO PELO LED
const int pinoBUZ = 11; // PINO DIGITAL UTILIZADO PELO BUZZER

void setup()
{
   pinMode(pinoLED, OUTPUT); // DEFINE O PINO COMO SAÍDA
   pinMode(pinoBUZ, OUTPUT); // DEFINE O PINO COMO SAÍDA
   pinMode(pinoSEN, INPUT);  // DEFINE O PINO COMO ENTRADA
}
void loop()
{

   if (digitalRead(pinoSEN) == HIGH)
   {                               // SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
      digitalWrite(pinoLED, HIGH); // ACENDE O LED
      digitalWrite(pinoBUZ, HIGH); // LIGA O BUZZER
   }
   else
   {                              // SENÃO, FAZ
      digitalWrite(pinoLED, LOW); // APAGA O LED
      digitalWrite(pinoBUZ, LOW); // DESLIGA O BUZZER
   }
}
