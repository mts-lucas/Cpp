const int Buz = 4;

void setup()
{
  pinMode(Buz, OUTPUT);
}

void loop()
{

  noTone(Buz);
  delay(2000);
  tone(Buz, 743); // Fa#
  delay(1000);
  tone(Buz, 701); // Fa
  delay(1200);
  noTone(Buz);
  delay(500);
  tone(Buz, 589); // re
  delay(250);
  tone(Buz, 663); // mi
  delay(250);
  tone(Buz, 701); // fa
  delay(700);
  tone(Buz, 663); // mi
  delay(700);
  tone(Buz, 589); // re
  delay(500);
  tone(Buz, 557); // do#
  delay(700);
  tone(Buz, 589); // re
  delay(700);
  tone(Buz, 663); // mi
  delay(500);
  tone(Buz, 743); // Fa#
  delay(1200);
  tone(Buz, 1000); // SiM
  delay(1500);
  tone(Buz, 497); // Si
  delay(500);
  tone(Buz, 557); // do#
  delay(500);
  tone(Buz, 589); // re
  delay(700);
  tone(Buz, 663); // mi
  delay(750);
  tone(Buz, 589); // re
  delay(500);
  tone(Buz, 557); // do#
  delay(700);
  tone(Buz, 887); // Lam
  delay(700);
  tone(Buz, 792); // SolM
  delay(500);
  tone(Buz, 743); // Fa#
  delay(1000);
  tone(Buz, 701); // Fa
  noTone(Buz);
  delay(1200);
}
