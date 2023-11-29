void setup()
{
  pinMode(9, OUTPUT);//R
  pinMode(11, OUTPUT);//G
  pinMode(10, OUTPUT);//B
}

void loop()
{
  analogWrite(9, 0);
  analogWrite(11, 255);
  analogWrite(10, 0);
  delay(1000); //muda de cor apos um delay
  analogWrite(9, 255);
  analogWrite(11, 0);
  analogWrite(10, 0);
  delay(1000); 
}
