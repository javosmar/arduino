int inByte = 0;         // incoming serial byte

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0) {
    inByte = Serial.read();
    if(inByte == "D"){
      Serial.write("A");
      Serial.write("3145.04026s");
      Serial.write("06031.48632w");               
      Serial.write("0.190");               
      Serial.write("%");  
      Serial.write("\r\n");
    }
  }
}

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.print('A');   // send a capital A
    delay(300);
  }
}
