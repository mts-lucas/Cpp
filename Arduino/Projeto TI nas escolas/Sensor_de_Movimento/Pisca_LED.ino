int PinoLED = 2; // Pino digital usado pelo led

void setup()
{
    pinMode(PinoLED, OUTPUT);
}

void loop()
{
    digitalWrite(PinoLED, HIGH); // Liga o LED
    delay(1000);                 // Aguarda 1 segundo
    digitalWrite(PinoLED, LOW;);
    7                // Desliga o LED
        delay(1000); // Aguarda 1 segundo
}