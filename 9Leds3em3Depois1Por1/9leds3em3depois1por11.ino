// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  //DE 3 EM 3
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(800);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(800);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(800);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(800);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(800);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(800);
  
  //1 por 1
  digitalWrite(1, HIGH);
  delay(800);
  digitalWrite(1, LOW);
  delay(800);
  digitalWrite(2, HIGH);
  delay(800);
  digitalWrite(2, LOW);
  delay(800);
  digitalWrite(3, HIGH);
  delay(800);
  digitalWrite(3, LOW);
  delay(800);
  digitalWrite(4, HIGH);
  delay(800);
  digitalWrite(4, LOW);
  delay(800);
  digitalWrite(5, HIGH);
  delay(800);
  digitalWrite(5, LOW);
  delay(800);
  digitalWrite(6, HIGH);
  delay(800);
  digitalWrite(6, LOW);
  delay(800);
  digitalWrite(7, HIGH);
  delay(800);
  digitalWrite(7, LOW);
  delay(800);
  digitalWrite(8, HIGH);
  delay(800);
  digitalWrite(8, LOW);
  delay(800);
  digitalWrite(9, HIGH);
  delay(800);
  digitalWrite(9, LOW);
  delay(800);
}