int LDR = A0; // Pino do LDR
int LED = 3; // Pino do LEd

void setup() {
    pinMode(LDR, INPUT); //Define o LDR como entrada
    pinMode(LED, OUTPUT); //Define o LED como saida
}

void loop() {
    if (analogRead(LDR) < 270) { //Le o valor analogico do LDR e compara com um limite(800)
        digitalWrite(LED, HIGH); //Se verdadeiro Ligue o LED
    }
    else {
        digitalWrite(LED, LOW); //Senão desligue o LED
    }
}
